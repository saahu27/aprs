from launch import LaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import IncludeLaunchDescription
from launch_ros.substitutions import FindPackageShare

from aprs_moveit_config.parameters import generate_parameters

def generate_launch_description():

    # Robot Commander Node
    robot_commander = Node(
        package="aprs_control",
        executable="aprs_ur_node",
        output="screen",
        parameters=generate_parameters()
    )


    # return LaunchDescription([robot_commander, moveit])
    return LaunchDescription([robot_commander])

# import launch
# import os
# import sys

# from launch_ros.actions import Node
# from launch.substitutions import PathJoinSubstitution, Command, FindExecutable
# from launch_ros.substitutions import FindPackageShare

# def get_robot_description():

#     robot_description_content = Command(
#         [
#             PathJoinSubstitution([FindExecutable(name="xacro")]),
#             " ",
#             PathJoinSubstitution([FindPackageShare("aprs_lab"), "urdf", "aprs.urdf.xacro"]),
#             " "
#         ]
#     )


#     robot_description = {"robot_description": robot_description_content}
#     return robot_description

# def get_robot_description_semantic():
#     # MoveIt Configuration
#     robot_description_semantic_content = Command(
#         [
#             PathJoinSubstitution([FindExecutable(name="xacro")]),
#             " ",
#             PathJoinSubstitution([FindPackageShare("aprs_moveit_config"), "srdf", "aprs_robots.srdf.xacro"]),
#             " "
#         ]
#     )
#     robot_description_semantic = {
#         "robot_description_semantic": robot_description_semantic_content
#     }
#     return robot_description_semantic
    
# def generate_launch_description():
#     # generate_common_hybrid_launch_description() returns a list of nodes to launch
#     robot_description = get_robot_description()
#     robot_description_semantic = get_robot_description_semantic()
#     demo_node = Node(
#         package="aprs_control",
#         executable="aprs_node",
#         name="aprs_control",
#         output="screen",
#         parameters=[
#             robot_description,
#             robot_description_semantic,
#         ],
#     )

#     return launch.LaunchDescription([demo_node])