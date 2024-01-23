cmake_minimum_required(VERSION 3.10.2)
project(fanuc_description)
find_package(ament_cmake REQUIRED)

install(
  DIRECTORY meshes urdf hooks
  DESTINATION share/${PROJECT_NAME}
)

ament_environment_hooks("${CMAKE_CURRENT_SOURCE_DIR}/hooks/${PROJECT_NAME}.dsv.in")
ament_environment_hooks("${CMAKE_CURRENT_SOURCE_DIR}/hooks/${PROJECT_NAME}.sh.in")

ament_package()
