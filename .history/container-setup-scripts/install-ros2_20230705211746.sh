
# Add ROS 2 apt repository
# Set up keys
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | apt-key add -
# Set up sources.list
RUN sh -c 'echo "deb [arch=amd64,arm64] http://packages.ros.org/ros2/ubuntu `lsb_release -cs` main" > /etc/apt/sources.list.d/ros2-latest.list'

# Install ROS 2, Gazebo, and build tools
# https://colcon.readthedocs.io/en/released/user/installation.html
RUN /bin/sh -c 'wget https://packages.osrfoundation.org/gazebo.gpg -O /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg' \
 && /bin/sh -c 'echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null' \
 && apt-get update \
 && apt-get install -y \
    python3-rosdep \
    python3-vcstool \
    python3-colcon-common-extensions \
    python3-colcon-mixin \
    ros-rolling-control-msgs \
    ros-rolling-controller-manager \
    ros-rolling-desktop \
    ros-rolling-generate-parameter-library \
    ros-rolling-geometric-shapes \
    ros-rolling-gripper-controllers \
    ros-rolling-joint-state-broadcaster \
    ros-rolling-joint-state-publisher \
    ros-rolling-joint-trajectory-controller \
    ros-rolling-moveit-common \
    ros-rolling-moveit-configs-utils \
    ros-rolling-moveit-core \
    ros-rolling-moveit-hybrid-planning \
    ros-rolling-moveit-msgs \
    ros-rolling-moveit-resources-panda-moveit-config \
    ros-rolling-moveit-ros-move-group \
    ros-rolling-moveit-ros-perception \
    ros-rolling-moveit-ros-planning \
    ros-rolling-moveit-ros-planning-interface \
    ros-rolling-moveit-ros-visualization \
    ros-rolling-moveit-servo \
    ros-rolling-moveit-visual-tools \
    ros-rolling-moveit \
    ros-rolling-rmw-cyclonedds-cpp \
    ros-rolling-ros2-control \
    ros-rolling-rviz-visual-tools \
    ros-rolling-xacro \
    gz-garden \
 && apt-get clean