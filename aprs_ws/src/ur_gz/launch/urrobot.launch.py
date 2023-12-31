# Copyright 2021 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

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
from launch_ros.descriptions import ParameterValue  # Need master or Galactic branch for this feature

def generate_launch_description():

    # Initialize Arguments
    ur_type = "ur5e"
    safety_limits = "true"
    # pkg_share_dir = get_package_share_directory('ur_description')
    # os.environ['GZ_SIM_RESOURCE_PATH'] = pkg_share_dir + "/meshes"
    pkg_share_dir_control = get_package_share_directory('ur_gz')
    control_path = pkg_share_dir_control + "/config"  + "/ur_controller.yaml"
    robot_ip = "192.168.0.1"

    real = "false"
    
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution([FindPackageShare("ur_description"), "urdf", "ur.urdf.xacro"]),
            " ",
            "robot_ip:=",
            robot_ip,
            " ",
            "name:=",
            "ur",
            " ",
            "ur_type:=",
            ur_type,
            " ",
            "sim_ignition:=",
            "true",
            " ",
            "simulation_controllers:=",
            control_path,
            " "
        ]
    )
    robot_description = {"robot_description": robot_description_content}
    # cc = (ParameterValue(Command(['cat ',robot_description_content]), value_type=str))
    # robot_description = {"robot_description": cc}

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
        arguments=['-name', 'ur',
                   '-param', 'robot_description'],
    )

    load_joint_state_broadcaster = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'joint_state_broadcaster'],
        output='screen'
    )

    load_joint_trajectory_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'ur_controller'],
        output='screen'
    )

    gz = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [os.path.join(get_package_share_directory('ros_gz_sim'),
                              'launch', 'gz_sim.launch.py')]),
            launch_arguments=[('gz_args', [' -r -v 4 empty.sdf'])])
    
    # launch_gz = RegisterEventHandler(
    #         event_handler=OnProcessExit(
    #             target_action=gz_spawn_entity,
    #             on_exit=[load_joint_state_broadcaster],
    #         )
    #     )
    # launch_controller = RegisterEventHandler(
    #         event_handler=OnProcessExit(
    #             target_action=load_joint_state_broadcaster,
    #             on_exit=[load_joint_trajectory_controller],
    #         )
    #     )
        
    
    # MoveIt node
    moveit = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare("ur5e_moveit_config"), "/launch", "/ur_moveit.launch.py"]
        )
    )

    # Static TF
    static_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="static_transform_publisher",
        output="log",
        arguments=["0.0", "0.0", "0.0", "0.0", "0.0", "0.0", "world", "base_link"],
    )

    # ros2_control using FakeSystem as hardware
    ros2_controllers_path = os.path.join(
        get_package_share_directory("ur_gz"),
        "config",
        "ur_controller.yaml",
    )

    ros2_control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, ros2_controllers_path],
        output="both",
    )

    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "/controller_manager",
        ],
    )

    ur_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "ur_controller",
            "--controller-manager",
            "/controller_manager",
        ],
    )


    return LaunchDescription([
        gz,
        # launch_gz,
        # launch_controller,
        node_robot_state_publisher,
        gz_spawn_entity,
        ur_controller_spawner,
        joint_state_broadcaster_spawner,
        ros2_control_node,
        static_tf,
        moveit,
        # Launch Arguments
        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='If true, use simulated clock'),
    ])
