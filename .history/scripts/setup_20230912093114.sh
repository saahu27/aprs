#!/usr/bin/env bash
cd aprs_ws
export GZ_VERSION=garden
#export GZ_SIM_RESOURCE_PATH="/home/developer/ariac_ws/src/ariac_gz/models"
sudo bash -c 'wget https://raw.githubusercontent.com/osrf/osrf-rosdep/master/gz/00-gazebo.list -O /etc/ros/rosdep/sources.list.d/00-gazebo.list'
rosdep update
# check that resolve works
rosdep resolve gz-garden
rm -r build/ install/ log/
sudo apt update
sudo apt upgrade
rosdep install --from-paths src --ignore-src -r -y -i --rosdistro humble
source /opt/ros/humble/setup.bash
colcon build --cmake-args -DBUILD_TESTING=ON