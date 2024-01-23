cmake_minimum_required(VERSION 3.5)
project(panda_moveit_config)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(panda_description REQUIRED)

# Install directories
install(DIRECTORY config launch rviz srdf DESTINATION share/${PROJECT_NAME})

# Install Python modules
ament_python_install_package(${PROJECT_NAME} SCRIPTS_DESTINATION lib/${PROJECT_NAME})

# Setup the project
ament_package()
