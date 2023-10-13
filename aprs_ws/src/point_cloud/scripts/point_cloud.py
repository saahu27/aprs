#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Image # Image is the message type
from sensor_msgs.msg import PointCloud2
from sensor_msgs_py.point_cloud2 import read_points_numpy
from std_msgs.msg import String
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
import cv2 # OpenCV library
import numpy as np
import time

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__("minimal_subscriber")


        self.pcl_subscription = self.create_subscription(
            PointCloud2, "/camera/camera/depth/color/points", self.listener_callback, 10
        )
        self.pcl_subscription  # prevent unused variable warning

        self.depth_subscription = self.create_subscription(
            Image, "/camera/camera/depth/image_rect_raw", self.depthimg_callback, 10
        )
        self.depth_subscription  # prevent unused variable warning

        self.image_subscription = self.create_subscription(
            Image, "/camera/camera/color/image_raw", self.img_callback, 10
        )

        # Used to convert between ROS and OpenCV images
        self.br = CvBridge()

    def img_callback(self, msg: Image):
        current_frame = self.br.imgmsg_to_cv2(msg)
        cv2.imshow("Detetct_type_conv", current_frame)
        cv2.waitKey(0)

    def listener_callback(self, msg: PointCloud2):
        # data = read_points_numpy(msg,field_names = ("x", "y", "z"), skip_nans=True, uvs=[[334,349]])
        # data = read_points_numpy(msg, reshape_organized_cloud=True, skip_nans=True)
        # print(data[320][240])
        # data = read_points(msg,field_names = ("x", "y", "z"), uvs=[437])
        # self.get_logger().info("Data: "+ ", ".join([str(d) for d in data]))
        # print(data.shape, end="\n\n")
        self.get_logger().info('Publishing: "%s"' % msg.data)
    
    def depthimg_callback(self, msg: Image):
        # Convert ROS Image message to OpenCV image
        current_frame = self.br.imgmsg_to_cv2(msg)
        # cv2.imshow("Detetct_type_conv", current_frame)
        # cv2.waitKey(0)

def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()