#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from controller_manager_msgs.srv import SwitchController

from rclpy.executors import SingleThreadedExecutor

class RobotControllerSwitcher(Node):
    def __init__(self):
        super().__init__('robot_controller_switcher') # type: ignore
        
        # Create service client to spawn objects into gazebo
        self.controller_switcher = self.create_client(SwitchController, '/controller_manager/switch_controller')
        self.request = SwitchController.Request()
        self.request.strictness = SwitchController.Request.BEST_EFFORT

        self.ur_robot_controllers = ["ur_robot_controller"]
        self.franka_robot_controllers = ["franka_robot_controller","gripper_trajectory_controller"]

        self.franka_robot_state = False
        self.ur_robot_state = False
    
    def run(self):
        while rclpy.ok():
            try:
                rclpy.spin_once(self)
            except KeyboardInterrupt:
                break

            self.request.start_controllers.clear() # type: ignore
            self.request.stop_controllers.clear() # type: ignore

            if not self.ur_robot_state:
                for controller in self.ur_robot_controllers:
                    self.request.start_controllers.append(controller) # type: ignore
                    self.ur_robot_state = True
            
            if not self.franka_robot_state:
                for controller in self.franka_robot_controllers:
                    self.request.start_controllers.append(controller) # type: ignore
                    self.franka_robot_state = True

            if self.request.start_controllers or self.request.stop_controllers:
                future = self.controller_switcher.call_async(self.request)

                rclpy.spin_until_future_complete(self, future)

                if not future.result().ok:
                    self.get_logger().error("Could not switch controllers")


if __name__ == "__main__":
    rclpy.init()

    robot_controller_switcher = RobotControllerSwitcher()

    robot_controller_switcher.run()

    rclpy.shutdown()