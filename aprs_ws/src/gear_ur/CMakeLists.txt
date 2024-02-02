cmake_minimum_required(VERSION 3.5)
project(gear_ur)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(THIS_PACKAGE_INCLUDE_DEPENDS
  rclcpp 
  moveit_ros_planning_interface
)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
foreach(Dependency IN ITEMS ${THIS_PACKAGE_INCLUDE_DEPENDS})
  find_package(${Dependency} REQUIRED)
endforeach()

add_library(${PROJECT_NAME} SHARED
  src/gear_pick.cpp
)
target_include_directories(${PROJECT_NAME} PRIVATE include)
ament_target_dependencies(${PROJECT_NAME} ${THIS_PACKAGE_INCLUDE_DEPENDS})

# Add main competitor executable
add_executable(gear src/main.cpp)
target_include_directories(gear PRIVATE include)
target_link_libraries(gear
  ${PROJECT_NAME}
)
ament_target_dependencies(gear ${THIS_PACKAGE_INCLUDE_DEPENDS})

install(TARGETS gear
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# Add moveit test executable
# add_executable(moveit_test src/moveit_test.cpp)
# target_include_directories(moveit_test PRIVATE include)
# target_link_libraries(moveit_test
#   ${PROJECT_NAME}
# )
# ament_target_dependencies(moveit_test ${THIS_PACKAGE_INCLUDE_DEPENDS})

# install(TARGETS moveit_test
#   RUNTIME DESTINATION lib/${PROJECT_NAME}
# )

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
)

install(DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY 
  launch
  DESTINATION share/${PROJECT_NAME}
)

ament_export_libraries(
  ${PROJECT_NAME}
)
ament_export_include_directories(
  include
)
ament_export_dependencies(
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)
ament_package()