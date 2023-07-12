cmake_minimum_required(VERSION 3.5)

project(ariac_gz)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
# find_package(gazebo REQUIRED)
# find_package(gazebo_ros REQUIRED)
find_package(std_msgs REQUIRED)

find_package(gz-cmake3 REQUIRED)
find_package(gz-plugin2 REQUIRED COMPONENTS register)
set(GZ_PLUGIN_VER ${gz-plugin2_VERSION_MAJOR})
find_package(gz-common5 REQUIRED COMPONENTS profiler)
set(GZ_COMMON_VER ${gz-common5_VERSION_MAJOR})
find_package(gz-sim7 REQUIRED)
set(GZ_SIM_VER ${gz-sim7_VERSION_MAJOR})

add_library(BasicSystem
  SHARED
  src/BasicSystem.cc
)

target_include_directories(
  BasicSystem PRIVATE include
)

target_link_libraries(BasicSystem PRIVATE
  gz-sim${GZ_SIM_VER}::gz-sim${GZ_SIM_VER})

add_library(FullSystem
  SHARED
  src/FullSystem.cc
)

target_include_directories(
  FullSystem PRIVATE include
)

target_link_libraries(FullSystem PRIVATE
  gz-sim${GZ_SIM_VER}::gz-sim${GZ_SIM_VER})

install(
  TARGETS BasicSystem FullSystem
  DESTINATION lib/${PROJECT_NAME}
)

# install(
#   DIRECTORY
#   launch
#   models
#   worlds
#   config
#   DESTINATION share/${PROJECT_NAME}
# )

install(
  DIRECTORY
    launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

install(
  DIRECTORY
    config/
  DESTINATION share/${PROJECT_NAME}/config
)

install(
  DIRECTORY
    models/
  DESTINATION share/${PROJECT_NAME}/models
)

install(
  DIRECTORY
    worlds/
  DESTINATION share/${PROJECT_NAME}/worlds
)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# Install Python modules
ament_python_install_package(${PROJECT_NAME} SCRIPTS_DESTINATION lib/${PROJECT_NAME})

# Install Python executables
install(PROGRAMS
  nodes/environment_startup_node.py
  nodes/robot_controller_switcher_node.py
  nodes/sensor_tf_broadcaster.py
  nodes/object_tf_broadcaster.py
  nodes/part_spawner.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_environment_hooks("${CMAKE_CURRENT_SOURCE_DIR}/hooks/${PROJECT_NAME}.dsv.in")
ament_environment_hooks("${CMAKE_CURRENT_SOURCE_DIR}/hooks/${PROJECT_NAME}.sh.in")

ament_package()