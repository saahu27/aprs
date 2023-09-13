FROM ubuntu:jammy as dev
#####
# Following lines are copied from
# https://gitlab.com/nvidia/container-images/opengl/-/blob/ubuntu18.04/base/Dockerfile
# and removed :i386 packages (not found)
RUN dpkg --add-architecture i386 \
 && apt-get update \
 && apt-get install -y --no-install-recommends \
        libxau6 libxau6:i386 \
        libxdmcp6 libxdmcp6:i386 \
        libxcb1 libxcb1:i386 \
        libxext6 libxext6:i386 \
        libx11-6 libx11-6:i386 && \
    rm -rf /var/lib/apt/lists/*

# nvidia-container-runtime
ENV NVIDIA_VISIBLE_DEVICES \
        ${NVIDIA_VISIBLE_DEVICES:-all}
ENV NVIDIA_DRIVER_CAPABILITIES \
        ${NVIDIA_DRIVER_CAPABILITIES:+$NVIDIA_DRIVER_CAPABILITIES,}graphics,compat32,utility

RUN echo "/usr/local/nvidia/lib" >> /etc/ld.so.conf.d/nvidia.conf && \
    echo "/usr/local/nvidia/lib64" >> /etc/ld.so.conf.d/nvidia.conf

# https://gitlab.com/nvidia/container-images/opengl/-/blob/ubuntu20.04/NGC-DL-CONTAINER-LICENSE
# COPY nvidia_opengl_ubuntu22/NGC-DL-CONTAINER-LICENSE /

# Required for non-glvnd setups.
ENV LD_LIBRARY_PATH /usr/lib/x86_64-linux-gnu:/usr/lib/i386-linux-gnu${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}:/usr/local/nvidia/lib:/usr/local/nvidia/lib64

#####
# Copied from
# https://gitlab.com/nvidia/container-images/opengl/blob/ubuntu20.04/glvnd/devel/Dockerfile
# and removed :i386 packages (not found)
RUN apt-get update \
 && apt-get install -y --no-install-recommends \
        pkg-config \
        libglvnd-dev libglvnd-dev:i386 \
        libgl1-mesa-dev libgl1-mesa-dev:i386 \
        libegl1-mesa-dev libegl1-mesa-dev:i386 \
        libgles2-mesa-dev libgles2-mesa-dev:i386 && \
    rm -rf /var/lib/apt/lists/*

ENV DEBIAN_FRONTEND=noninteractive

ENV ROS_DISTRO=humble
ENV AMENT_PREFIX_PATH=/opt/ros/humble
ENV COLCON_PREFIX_PATH=/opt/ros/humble
ENV LD_LIBRARY_PATH=/opt/ros/humble/lib
ENV PATH=/opt/ros/humble/bin:$PATH
ENV PYTHONPATH=/opt/ros/humble/lib/python3.8/site-packages
ENV ROS_PYTHON_VERSION=3
ENV ROS_VERSION=2

# # Copy container-setup scripts
COPY container-setup-scripts/ /container-setup-scripts/

# This avoids keyboard interaction when asked for geographic area
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
  && apt-get install -y \
  build-essential \
  cmake \
  cppcheck \
  curl \
  doxygen \
  gdb \
  git \
  gnupg2 \
  libbluetooth-dev \
  libcwiid-dev \
  libgoogle-glog-dev \
  libspnav-dev \
  libusb-dev \
  locales \
  lsb-release \
  mercurial \
  python3-dbg \
  python3-empy \
  python3-numpy \
  python3-pip \
  python3-psutil \
  python3-venv \
  software-properties-common \
  sudo \
  tzdata \
  vim \
  wget \
  curl \
  && apt-get clean

# Set Locale for ROS 2
RUN locale-gen en_US en_US.UTF-8 && \
  update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8 && \
  export LANG=en_US.UTF-8

# Add ROS 2 apt repository
# Set up keys
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | apt-key add -
# Set up sources.list
RUN sh -c 'echo "deb [arch=amd64,arm64] http://packages.ros.org/ros2/ubuntu `lsb_release -cs` main" > /etc/apt/sources.list.d/ros2-latest.list'

RUN export DEBIAN_FRONTEND=noninteractive

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
  ros-humble-control-msgs \
  ros-humble-controller-manager \
  ros-humble-desktop \
  ros-humble-generate-parameter-library \
  ros-humble-geometric-shapes \
  ros-humble-gripper-controllers \
  ros-humble-joint-state-broadcaster \
  ros-humble-joint-state-publisher \
  ros-humble-joint-trajectory-controller \
  ros-humble-moveit-common \
  ros-humble-moveit-configs-utils \
  ros-humble-moveit-core \
  ros-humble-moveit-hybrid-planning \
  ros-humble-moveit-msgs \
  ros-humble-moveit-resources-panda-moveit-config \
  ros-humble-moveit-ros-move-group \
  ros-humble-moveit-ros-perception \
  ros-humble-moveit-ros-planning \
  ros-humble-moveit-ros-planning-interface \
  ros-humble-moveit-ros-visualization \
  ros-humble-moveit-servo \
  ros-humble-moveit-visual-tools \
  ros-humble-moveit \
  ros-humble-rmw-cyclonedds-cpp \
  ros-humble-ros2-control \
  ros-humble-rviz-visual-tools \
  ros-humble-xacro \
  gz-garden \
  && apt-get clean

ENV REALSENSE_BASE=/root

ENV REALSENSE_DIR=$REALSENSE_BASE/librealsense

# clone librealsense SKD

RUN git clone https://github.com/IntelRealSense/librealsense.git $REALSENSE_DIR \
    && cd $REALSENSE_DIR \
    && mkdir build

RUN apt-get install libssl-dev libusb-1.0-0-dev libudev-dev pkg-config libgtk-3-dev cmake -y

# compile librealsense SDK

RUN cd $REALSENSE_DIR/build \
  && cmake ../ -DBUILD_EXAMPLES=true \
  && make uninstall && make clean && make && make install


ARG USERNAME=SahuGf
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN groupadd --gid $USER_GID $USERNAME \
  && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
  && apt-get update \
  && apt-get install -y sudo \
  && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
  && chmod 0440 /etc/sudoers.d/$USERNAME \
# # Create a non-root user
# RUN /container-setup-scripts/create-user.sh $USERNAME $USER_UID $USER_GID\
  && echo "source /usr/share/bash-completion/completions/git" >> /home/$USERNAME/.bashrc \
  && echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> /home/$USERNAME/.bashrc 

# RUN /container-setup-scripts/intel_realsense.sh

# Cleanup
RUN rm -rf /var/lib/apt/lists/* \
    && rm -rf /container-setup-scripts

RUN apt-get update \
   && apt-get autoremove -y \
   && apt-get clean -y \
   && rm -rf /var/lib/apt/lists/*

ARG USERNAME=SahuGf
RUN sudo usermod -a -G video $USERNAME

ENV DEBIAN_FRONTEND=dialog

ARG WORKSPACE=/workspaces/aprs

# Initialize rosdep
RUN sudo rosdep init && rosdep update

RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash;" >> /home/$USERNAME/.bashrc && \
    echo "if [ -f ${WORKSPACE}/install/setup.bash ]; then source ${WORKSPACE}/aprs_ws/install/setup.bash; fi" >> /home/$USERNAME/.bashrc

USER $USERNAME