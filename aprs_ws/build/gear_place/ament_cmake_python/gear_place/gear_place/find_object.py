import cv2
from rclpy.node import Node
from math import sqrt
import numpy as np
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image  # msg for recieving the image

from cv_bridge import (
    CvBridge,
)  # for converting the sensor_msgs.msg.image to opencv image


class FindObject(Node):
    def __init__(self):
        super().__init__("find_object")
        self.bridge = CvBridge()
        self.cv_image = None
        self.gx = None
        self.gy = None
        self.ex = None
        self.ey = None
        self.dist_points = {}
        self.radius = 0
        self.thresh_image = None
        self.declare_parameter("thresh_value", 50)
        self.subscription = self.create_subscription(
            Image, "/camera/camera/depth/image_rect_raw", self.listener_callback, qos_profile_sensor_data
        )
        self.subscription  # prevent unused variable warning

    def closest_to_circle(self, contours):
        """
        Returns the contour which is closest to a circle
        """
        circle_areas = []
        areas = [cv2.contourArea(cnt) for cnt in contours]
        for cnt in contours:
            (_, _), radius = cv2.minEnclosingCircle(cnt)
            circle_areas.append(__import__("math").pi * radius**2)
        diffs = [areas[i] / circle_areas[i] for i in range(len(areas))]
        return diffs.index(max(diffs)), diffs[diffs.index(max(diffs))]

    def remove_bad_contours(self, contours: tuple):
        """
        Removes contours which are too small and ones with too few sides to be the gear
        """
        minimum_contour_area = 1500
        return [cnt  for cnt in contours if cv2.contourArea(cnt) > minimum_contour_area and not cv2.isContourConvex(cnt)]

    def listener_callback(self, msg):
        """
        Gets the image from the contour, blurs it, applies a threshold, finds the contours.
        Then, the functions above are used to find the gear out of all the contours that are found.
        It then finds the center of the gear contour.
        """
        min_thresh, max_thresh = 0, 250 # works on fr3
        # min_thresh, max_thresh = 150,225
        thresh_value = (
            self.get_parameter("thresh_value").get_parameter_value().integer_value
        )
        cv_image = self.bridge.imgmsg_to_cv2(msg, "32FC1")
        cv_image_array = np.array(cv_image, dtype=np.dtype("u1"))
        self.cv_image = cv_image_array
        alpha = 2.5  # Contrast control (1.0-3.0)
        beta = -65  # Brightness control (-100-100)
        self.cv_image = cv2.convertScaleAbs(self.cv_image, alpha=alpha, beta=beta)
        self.original_image = self.cv_image.copy()
        for i in range(len(self.cv_image)):
            for j in range(len(self.cv_image[i])):
                if self.cv_image[i][j] == 255:
                    self.cv_image[i][j] = 0
        blurred_img = cv2.GaussianBlur(self.cv_image, (7, 7), 0)
        for _ in range(3):
            blurred_img = cv2.GaussianBlur(blurred_img, (7, 7), 0)
        contours_left = 0
        c = 0
        contour_to_circle_ratio = 0.0
        self.get_logger().info("Starting scan")
        while contours_left < 1 or contour_to_circle_ratio <= 0.9:
            c += 1
            _, self.thresh_image = cv2.threshold(
                blurred_img, thresh_value, 255, cv2.THRESH_BINARY_INV
            )
            contours, _ = cv2.findContours(
                self.thresh_image, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE
            )
            before_remove = len(contours)
            contours = self.remove_bad_contours(contours)
            contours_left = len(contours)
            if thresh_value <= min_thresh:
                thresh_value = max_thresh
            thresh_value -= 1
            if c >= max_thresh:
                self.get_logger().info("Gear not found. Trying again")
                return
            if contours_left >= 1:
                closest_to_circle, contour_to_circle_ratio = self.closest_to_circle(
                    contours
                )
        self.get_logger().info(
            f"Gear found at thresh value {thresh_value}! {before_remove - len(contours)} contours were removed. Took {c} different "
            + ("threshold" if c == 1 else "thresholds")
        )
        (x, y), self.radius = cv2.minEnclosingCircle(contours[closest_to_circle])
        self.radius = int(self.radius)
        self.gx = int(x)
        self.gy = int(y)
        self.ex = int(x)+int(self.radius)
        self.ey = int(y)
        try:
            (h, w) = self.cv_image.shape[:2]
            self.cx = w // 2
            self.cy = h // 2
            cv2.circle(self.thresh_image, (self.gx//2, self.gy//2), 7, (0,0,0), -1)
        except:
            self.get_logger.error("Error: Contour does not form a single shape")
        self.get_logger().info(
            f"X coordinate for gear: {self.gx}, y coordinate for gear {self.gy}. Circle ratio: {round(contour_to_circle_ratio,5)}"
        )
        unit_circle = sqrt(2)/2
        between_x_y = int(unit_circle*self.radius)
        self.dist_points[(self.gx, self.gy)] = []
        if self.gx+self.radius <=640:
            self.dist_points[(self.gx, self.gy)].append((self.gx+self.radius,self.gy))
        if self.gx-self.radius >=0:
            self.dist_points[(self.gx, self.gy)].append((self.gx-self.radius,self.gy))
        if self.gy+self.radius <= 480:
            self.dist_points[(self.gx, self.gy)].append((self.gx,self.gy+self.radius))
        if self.gy-self.radius >=0:
            self.dist_points[(self.gx, self.gy)].append((self.gx,self.gy-self.radius))

        self.dist_points[(self.gx, self.gy)]+=[(self.gx+between_x_y*[-1,1][i],self.gy+between_x_y*[-1,1][j]) for i in range(2) for j in range(2) if 0<=self.gx+between_x_y*[-1,1][i]<=640 and 0<=self.gy+between_x_y*[-1,1][i]<=480]

    def ret_cent_gear(self):
        """
        Returns the x and y coordinates of the pixel at the center of the gear
        """
        return self.gx, self.gy
    
    def ret_edge_gear(self):
        """
        Returns the x and y coordinates of a point on the edge of the gear
        """
        return self.ex, self.ey