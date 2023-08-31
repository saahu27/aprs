#! /bin/sh

sudo apt-get update \
    && sudo apt-get upgrade \
    && sudo apt-get dist-upgrade

mkdir sensordep

cd sensordep

git clone https://github.com/IntelRealSense/librealsense.git

sudo apt-get install libssl-dev libusb-1.0-0-dev libudev-dev pkg-config libgtk-3-dev cmake

cd librealsense

mkdir build && cd build

cmake ../ -DBUILD_EXAMPLES=true

sudo make uninstall && make clean && make && sudo make install

cd aprs_ws/src

git clone https://github.com/IntelRealSense/realsense-ros.git -b ros2-development

cd ..

sudo apt-get install python3-rosdep -y
sudo rosdep init # "sudo rosdep init --include-eol-distros" for Eloquent and earlier
rosdep update # "sudo rosdep update --include-eol-distros" for Eloquent and earlier
rosdep install -i --from-path src --rosdistro $ROS_DISTRO --skip-keys=librealsense2 -y

colcon build