import os

from ament_index_python.packages import get_package_share_directory

import launch_ros
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.launch_context import LaunchContext
import xacro

def generate_launch_description():

    pkg_share_dir_control = get_package_share_directory('franka_gz')
    control_path = pkg_share_dir_control + "/config"  + "/franka_controller.yaml"
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution([FindPackageShare("panda_description"), "urdf", "panda.urdf.xacro"]),
            " ",
            "name:=",
            "panda",
            " ",
            "ros2_controller_parameters:=",
            control_path,
            " "
        ]
    )
    
    robot_description = {"robot_description": robot_description_content}
    # Launch Arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)


    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='both',
        parameters=[{'use_sim_time': True},robot_description]
    )
    gz_spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        parameters=[
            {'robot_description': robot_description_content}],
        output='screen',
        arguments=['-name', 'franka',
                   '-param', 'robot_description'],
    )

    load_joint_state_broadcaster = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'joint_state_broadcaster'],
        output='screen'
    )

    load_joint_trajectory_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'franka_controller'],
        output='screen'
    )

    load_gripper_trajectory_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'gripper_trajectory_controller'],
        output='screen'
    )

    gz = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [os.path.join(get_package_share_directory('ros_gz_sim'),
                              'launch', 'gz_sim.launch.py')]),
            launch_arguments=[('gz_args', [' -r -v 4 empty.sdf'])])
    
    # MoveIt node
    moveit = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare("panda_moveit_config"), "/launch", "/franka_moveit.launch.py"]
        )
    )
    
    launch_gz = RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=gz_spawn_entity,
                on_exit=[load_joint_state_broadcaster],
            )
        )
    launch_controller = RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=load_joint_state_broadcaster,
                on_exit=[load_joint_trajectory_controller],
            )
        )

    # launch_gripper_controller = RegisterEventHandler(
    #     event_handler=OnProcessExit(
    #         target_action=load_gripper_trajectory_controller,
    #         on_exit=[moveit]
    #     )
    # )

    return LaunchDescription([
        gz,
        gz_spawn_entity,
        launch_gz,
        node_robot_state_publisher,
        launch_controller,
        # launch_gripper_controller,
        load_gripper_trajectory_controller,
        moveit,
        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='If true, use simulated clock'),
    ])