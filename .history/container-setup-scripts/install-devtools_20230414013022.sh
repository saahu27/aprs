apt-get update
apt-get install -y bash-completion 
apt-get install -y git
apt-get install -y build-essential cmake gdb
apt-get install -y pylint3 python3-argcomplete
apt-get install -y python3-colcon-common-extensions
apt-get install -y python3-vcstool
apt-get install -y wget
apt-get install -y ros-galactic-ament-lint python3-autopep8
apt-get install -y ros-galactic-launch-testing ros-galactic-launch-testing-ament-cmake ros-galactic-launch-testing-ros
apt-get install -y nano
apt-get install -y htop
apt-get install -y python3-bloom python3-rosdep fakeroot
apt-get install -y dpkg-dev debhelper
apt-get install -y lcov
apt-get update
apt-get install ros-galactic-gazebo-ros-pkgs
pip3 install colcon-mixin
pip3 install colcon-common-extensions
pip3 install colcon-lcov-result
pip3 install ipykernel
pip3 install matplotlib
apt install ros-galactic-moveit
rosdep init || echo "rosdep already initialized"
