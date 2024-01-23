import os
import yaml
import launch_ros
import launch
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
    # robot_ip = "192.168.0.1"
    description = launch_ros.substitutions.FindPackageShare(package='fanuc_description').find('fanuc_description')
    robot_description = {"robot_description":  launch_ros.descriptions.ParameterValue( launch.substitutions.Command(['xacro ',os.path.join(description,'urdf/fanuc.urdf.xacro')]), value_type=str)}
    # robot_description_content = Command(
    #     [
    #         PathJoinSubstitution([FindExecutable(name="xacro")]),
    #         " ",
    #         PathJoinSubstitution([FindPackageShare("fanuc_description"), "urdf", "fanuc.urdf.xacro"]), 
    #         " "
    #     ]
    # )

    parameters.append({"robot_description": launch_ros.descriptions.ParameterValue( launch.substitutions.Command(['xacro ',os.path.join(description,'urdf/fanuc.urdf.xacro')]), value_type=str)})
    
    parameters.append({"robot_description_semantic": load_file("fanuc_moveit_config", "srdf/fanuc.srdf")})

    parameters.append({"robot_description_kinematics": load_yaml("fanuc_moveit_config", "config/kinematics.yaml")})

    parameters.append({"use_sim_time": True})

    return parameters

