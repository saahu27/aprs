from launch import LaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import IncludeLaunchDescription
from launch_ros.substitutions import FindPackageShare

from panda_moveit_config.parameters import generate_parameters

def generate_launch_description():

    # Robot Commander Node
    robot_commander = Node(
        package="franka_setup",
        executable="franka_setup",
        output="screen",
        parameters=generate_parameters()
    )


    # return LaunchDescription([robot_commander, moveit])
    return LaunchDescription([robot_commander])