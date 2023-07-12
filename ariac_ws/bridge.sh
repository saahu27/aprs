#!/usr/bin/env bash
export GZ_VERSION=garden
export GZ_SIM_RESOURCE_PATH="/workspaces/aprs/ariac_ws/src/ariac_gz/models"
sudo bash -c 'wget https://raw.githubusercontent.com/osrf/osrf-rosdep/master/gz/00-gazebo.list -O /etc/ros/rosdep/sources.list.d/00-gazebo.list'
rosdep update
# check that resolve works
rosdep resolve gz-garden
cd ~/ariac_ws
rm -r build/ install/ log/
sudo apt update
sudo apt upgrade
rosdep install --from-paths src --ignore-src -r -y -i --rosdistro rolling
source /opt/ros/rolling/setup.bash
colcon build --cmake-args -DBUILD_TESTING=ON
#--rosdistro={$ROS_DISTRO} -y --os=ubuntu:jammy



# prepend-non-duplicate;GZ_SIM_RESOURCE_PATH;share/@PROJECT_NAME@/models
# prepend-non-duplicate;GZ_SIM_SYSTEM_PLUGIN_PATH;lib/@PROJECT_NAME@/


# ament_prepend_unique_value GZ_SIM_RESOURCE_PATH "$AMENT_CURRENT_PREFIX/share/@PROJECT_NAME@/worlds"
# ament_prepend_unique_value GZ_SIM_PLUGIn_PATH "$AMENT_CURRENT_PREFIX/lib/@PROJECT_NAME@"
