import os
import yaml

from launch.substitutions import Command, FindExecutable, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

from ament_index_python.packages import get_package_share_directory

def load_file(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return file.read()
    except EnvironmentError:  # parent of IOError, OSError *and* WindowsError where available
        return None

def load_yaml(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, "r") as file:
            return yaml.safe_load(file)
    except EnvironmentError:  # parent of IOError, OSError *and* WindowsError where available
        return None

def generate_parameters():
    parameters = []
     # Initialize Arguments
    ur_type = "ur5e"
    safety_limits = "true"
    pkg_share_dir = get_package_share_directory('ur_description')
    pkg_share_dir_control = get_package_share_directory('ur_gz')
    control_path = pkg_share_dir_control + "/config"  + "/ur_controller.yaml"
    robot_ip = "192.168.0.1"
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
            "ur5e",
            " ",
            "sim_ignition:=",
            "true",
            " ",
            "simulation_controllers:=",
            control_path,
            " "
        ]
    )

    parameters.append({"robot_description": robot_description_content})
    
    parameters.append({"robot_description_semantic": load_file("ur5e_moveit_config", "srdf/ur.srdf")})

    parameters.append({"robot_description_kinematics": load_yaml("ur5e_moveit_config", "config/kinematics.yaml")})

    parameters.append({"use_sim_time": True})

    return parameters

