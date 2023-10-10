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
    control_path = pkg_share_dir_control + "/config"  + "/controllers.yaml"
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
        parameters=[{'use_sim_time': True},robot_description, {'frame_prefix' : ''}],
        arguments=[robot_description],
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
    # Initialize Arguments
    ur_type = "ur5e"
    safety_limits = "true"
    # pkg_share_dir = get_package_share_directory('ur_description')
    # os.environ['GZ_SIM_RESOURCE_PATH'] = pkg_share_dir + "/meshes"
    ur_pkg_share_dir_control = get_package_share_directory('franka_gz')
    ur_control_path = ur_pkg_share_dir_control + "/config"  + "/controllers.yaml"
    robot_ip = "192.168.0.1"

    real = "false"
    
    ur_robot_description_content = Command(
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
            "prefix:=",
            "frame_",
            " ",
            "ur_type:=",
            ur_type,
            " ",
            "sim_ignition:=",
            "true",
            " ",
            "simulation_controllers:=",
            ur_control_path,
            " "
        ]
    )
    ur_robot_description = {"robot_description": ur_robot_description_content}
    # cc = (ParameterValue(Command(['cat ',robot_description_content]), value_type=str))
    # robot_description = {"robot_description": cc}

    # Launch Arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)


    ur_node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='both',
        # namespace=['ur'],
        parameters=[{'use_sim_time': True},ur_robot_description, {'frame_prefix' : ''}],
        arguments=[ur_robot_description]
    )

    ur_gz_spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        parameters=[
            {'robot_description': ur_robot_description_content}],
        output='screen',
        arguments=['-name', 'ur5e',
                   '-param', 'robot_description'
                   ]
    )
# '-tf_prefix', 'robot2'

    # ur_load_joint_state_broadcaster = ExecuteProcess(
    #     cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
    #          'joint_state_broadcaster'],
    #     output='screen'
    # )

    ur_load_joint_trajectory_controller = ExecuteProcess(
        cmd=['ros2', 'control', 'load_controller', '--set-state', 'active',
             'ur_controller'],
        output='screen'
    )

    # gz = IncludeLaunchDescription(
    #         PythonLaunchDescriptionSource(
    #             [os.path.join(get_package_share_directory('ros_gz_sim'),
    #                           'launch', 'gz_sim.launch.py')]),
    #         launch_arguments=[('gz_args', [' -r -v 4 empty.sdf'])])
    
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
    ur_moveit = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare("ur5e_moveit_config"), "/launch", "/ur_moveit.launch.py"]
        )
    )

    # Static TF
    # ur_static_tf = Node(
    #     package="tf2_ros",
    #     executable="static_transform_publisher",
    #     name="static_transform_publisher",
    #     output="log",
    #     arguments=["0.0", "0.0", "0.0", "0.0", "0.0", "0.0", "world", "base_link"],
    # )

    # # ros2_control using FakeSystem as hardware
    # ur_ros2_controllers_path = os.path.join(
    #     get_package_share_directory("ur_gz"),
    #     "config",
    #     "ur_controller.yaml",
    # )

    # ur_ros2_control_node = Node(
    #     package="controller_manager",
    #     executable="ros2_control_node",
    #     parameters=[ur_robot_description, ur_ros2_controllers_path],
    #     output="both",
    # )

    # ur_joint_state_broadcaster_spawner = Node(
    #     package="controller_manager",
    #     executable="spawner",
    #     arguments=[
    #         "joint_state_broadcaster",
    #         "--controller-manager",
    #         "/controller_manager",
    #     ],
    # )

    ur_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=[
            "ur_controller",
            "--controller-manager",
            "/controller_manager",
        ],
    )
    

    # launch_ur_controller = RegisterEventHandler(
    #         event_handler=OnProcessExit(
    #             target_action=ur_gz_spawn_entity,
    #             on_exit=[ur_ros2_control_node],
    #         )
    #     )
    # launch_ur_moveit = RegisterEventHandler(
    #         event_handler=OnProcessExit(
    #             target_action=ur_ros2_control_node,
    #             on_exit=[ur_moveit],
    #         )
    # )
    return LaunchDescription([
        gz,
        # gz_spawn_entity,
        # # launch_gz,
        # node_robot_state_publisher,
        # launch_controller,
        # launch_gripper_controller,
        # load_gripper_trajectory_controller,
        # moveit,
        ur_gz_spawn_entity,
        # # ur_controller_spawner,
        ur_node_robot_state_publisher,
        ur_load_joint_trajectory_controller,
        # ur_ros2_control_node,
        # ur_moveit,
        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='If true, use simulated clock'),
    ])