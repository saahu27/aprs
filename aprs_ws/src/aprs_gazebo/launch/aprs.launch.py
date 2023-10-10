import os
import yaml
import rclpy.logging
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.conditions import IfCondition

from ament_index_python.packages import get_package_share_directory, PackageNotFoundError

def launch_setup(context, *args, **kwargs):
    # Set the path to this package.
    pkg_share = FindPackageShare(package='worlds').find('worlds')

    # Set the path to the world file
    world_file_name = 'demo_world'
    world_path = os.path.join(pkg_share, 'worlds', world_file_name)

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution([FindPackageShare("aprs_lab"), "urdf", "aprs.urdf.xacro"]),
            " "
        ]
    )

    robot_description = {"robot_description": robot_description_content}

    # Launch Arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)

    # Robot State Publisher
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[{'use_sim_time': True},robot_description]
    )

    # Robot Controller Spawners
    controller_names = [
        'joint_state_broadcaster',
        'ur_robot_controller',
    ]

    controller_spawner_nodes = []
    for controller in controller_names:
        if controller == 'joint_state_broadcaster':
            args = [controller]
        else:
            args = [controller, '--stopped']

        controller_spawner_nodes.append(
            Node(
                package="controller_manager",
                executable="spawner",
                name=controller + "_spawner",
                arguments=args,
                parameters=[
                    {"use_sim_time": True},
                ],
            )
        )

        gz = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [os.path.join(get_package_share_directory('ros_gz_sim'),
                              'launch', 'gz_sim.launch.py')]),
            launch_arguments=[('gz_args', [' -r -v 4 empty.sdf'])])
        
        gz_spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        parameters=[
            {'robot_description': robot_description_content}],
        output='screen',
        arguments=['-name', 'ur',
                   '-param', 'robot_description'],
    )

        nodes_to_start = [
        gz,
        gz_spawn_entity,
        robot_state_publisher,
        *controller_spawner_nodes,
        ]
        
        return nodes_to_start
        
def generate_launch_description():
    declared_arguments = []

    return LaunchDescription(declared_arguments + [OpaqueFunction(function=launch_setup)])