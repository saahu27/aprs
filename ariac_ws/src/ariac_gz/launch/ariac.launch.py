# Copyright 2019 Open Source Robotics Foundation, Inc.
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
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
)

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription,ExecuteProcess
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit

import xacro

def launch_setup(context, *args, **kwargs):
    pkg_project_bringup = get_package_share_directory('ur_description')

    pkg_project_gazebo = get_package_share_directory('ariac_gz')

    pkg_project_description = get_package_share_directory('ariac_description')
    
    pkg_ros_gz_sim = get_package_share_directory('ros_gz_sim')

    # Launch Arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)

    # Load the SDF file from "description" package
    xacro_file =  os.path.join(pkg_project_description, 'urdf', 'ariac_robots', 'ariac_robots.urdf.xacro')

    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution([FindPackageShare("ariac_description"), "urdf/ariac_robots", "ariac_robots.urdf.xacro"]),
            " "
        ]
    )

    with open(xacro_file, 'r') as infp:
        robot_desc = infp.read()

    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')),
        launch_arguments={'gz_args': PathJoinSubstitution([
            pkg_project_gazebo,
            'worlds',
            'diff.sdf'
        ])}.items(),
    )

    spawn = Node(
        package='ros_gz_sim',
        executable='create',
        parameters=[
            {'robot_description': robot_description_content}],
        arguments=[
            '-name', 'ariac_robots',
            '-param', 'robot_description',
        ],
        output='screen',
    )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='both',
        parameters=[
            {'use_sim_time': True},
            {'robot_description': robot_description_content},
        ]
    )

    # joint_state_publisher_node = Node(
    #     package="joint_state_publisher_gui",
    #     executable="joint_state_publisher_gui",
    # )

    # load_joint_state_broadcaster = ExecuteProcess(
    #     cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
    #          'joint_state_broadcaster'],
    #     output='screen'
    # )

    # load_joint_trajectory_controller = ExecuteProcess(
    #     cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
    #          'floor_robot_controller'],
    #     output='screen'
    # )

    # Robot Controller Switcher
    robot_controller_switcher = Node(
        package='ariac_gz',
        executable='robot_controller_switcher_node.py',
        output='screen',
    )

    # Robot Controller Spawners
    controller_names = [
        'joint_state_broadcaster',
        'floor_robot_controller',
        'ceiling_robot_controller',
        'linear_rail_controller',
        'gantry_controller',
        # 'agv1_controller',
        # 'agv2_controller',
        # 'agv3_controller',
        # 'agv4_controller',
    ]

    controller_spawner_nodes = []
    for controller in controller_names:
        if controller == 'joint_state_broadcaster' or controller.count('agv') > 0:
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
    
    nodes_to_start =    [
        gz_sim,
        spawn,
        # joint_state_publisher_node,
        # RegisterEventHandler(
        #     event_handler=OnProcessExit(
        #         target_action=spawn,
        #         on_exit=[load_joint_state_broadcaster],
        #     )
        # ),
        # RegisterEventHandler(
        #     event_handler=OnProcessExit(
        #         target_action=load_joint_state_broadcaster,
        #         on_exit=[load_joint_trajectory_controller],
        #     )
        # ),
        robot_state_publisher,

        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='If true, use simulated clock'),
        robot_controller_switcher,
        *controller_spawner_nodes,
    ]
    return nodes_to_start
def generate_launch_description():

    return LaunchDescription([OpaqueFunction(function=launch_setup)])
    
