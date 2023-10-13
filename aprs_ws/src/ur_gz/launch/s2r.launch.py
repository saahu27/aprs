from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, ThisLaunchFileDir
from ament_index_python.packages import get_package_share_directory
import os
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node

def generate_launch_description():
    # Declare arguments
    declared_arguments = []
    declared_arguments.append(
        DeclareLaunchArgument(
            "robot_ip",
            description="IP address by which the robot can be reached.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "use_mock_hardware",
            default_value="false",
            description="Start robot with mock hardware mirroring command to its states.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "mock_sensor_commands",
            default_value="false",
            description="Enable mock command interfaces for sensors used for simple simulations. \
            Used only if 'use_mock_hardware' parameter is true.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "initial_joint_controller",
            default_value="scaled_joint_trajectory_controller",
            description="Initially loaded robot controller.",
            choices=[
                "scaled_joint_trajectory_controller",
                "joint_trajectory_controller",
                "forward_velocity_controller",
                "forward_position_controller",
            ],
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "activate_joint_controller",
            default_value="true",
            description="Activate loaded joint controller.",
        )
    )

    # Initialize Arguments
    robot_ip = LaunchConfiguration("robot_ip")
    use_mock_hardware = LaunchConfiguration("use_mock_hardware")
    mock_sensor_commands = LaunchConfiguration("mock_sensor_commands")
    initial_joint_controller = LaunchConfiguration("initial_joint_controller")
    activate_joint_controller = LaunchConfiguration("activate_joint_controller")

    base_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([FindPackageShare("ur_robot_driver"), "/launch", "/ur_control.launch.py"]),
        launch_arguments={
            "ur_type": "ur5e",
            "robot_ip": robot_ip,
            "use_mock_hardware": use_mock_hardware,
            "mock_sensor_commands": mock_sensor_commands,
            "initial_joint_controller": initial_joint_controller,
            "activate_joint_controller": activate_joint_controller,
        }.items(),
    )

    gz = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                [os.path.join(get_package_share_directory('ros_gz_sim'),
                              'launch', 'gz_sim.launch.py')]),
            launch_arguments=[('gz_args', [' -r -v 4 empty.sdf'])])
    
    # Initialize Arguments
    ur_type = "ur5e"
    safety_limits = "true"
    pkg_share_dir = get_package_share_directory('ur_description')
    os.environ['GZ_SIM_RESOURCE_PATH'] = pkg_share_dir + "/meshes"
    pkg_share_dir_control = get_package_share_directory('ur_gz')
    control_path = pkg_share_dir_control + "/config"  + "/ur_controller.yaml"
    
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution([FindPackageShare("ur_description"), "urdf", "ur.urdf.xacro"]),
            " ",
            "name:=",
            "ur",
            " ",
            "ur_type:=",
            ur_type,
            " ",
            "sim_gz:=",
            "true",
            " ",
            "simulation_controllers:=",
            control_path,
            " "
        ]
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

    return LaunchDescription(declared_arguments + [base_launch, gz, gz_spawn_entity])