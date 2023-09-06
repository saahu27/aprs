cd aprs_ws/src

git clone https://github.com/IntelRealSense/realsense-ros.git -b ros2-development

cd ..

sudo apt-get install python3-rosdep -y
sudo rosdep init # "sudo rosdep init --include-eol-distros" for Eloquent and earlier
rosdep update # "sudo rosdep update --include-eol-distros" for Eloquent and earlier
rosdep install -i --from-path src --rosdistro $ROS_DISTRO --skip-keys=librealsense2 -y

colcon build

. install/setup.bash