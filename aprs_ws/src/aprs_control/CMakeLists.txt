cmake_minimum_required(VERSION 3.8)
project(aprs_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(THIS_PACKAGE_INCLUDE_DEPENDS
  rclcpp 
  rclpy
  moveit_ros_planning_interface
)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)

foreach(Dependency IN ITEMS ${THIS_PACKAGE_INCLUDE_DEPENDS})
  find_package(${Dependency} REQUIRED)
endforeach()
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_library(${PROJECT_NAME} SHARED
  src/aprs_node.cpp
)
target_include_directories(${PROJECT_NAME} PRIVATE include)
ament_target_dependencies(${PROJECT_NAME} ${THIS_PACKAGE_INCLUDE_DEPENDS})

# Add aprs commander node
# add_executable(aprs_node src/aprs_node.cpp)
# target_include_directories(aprs_node PUBLIC include)
# target_compile_features(aprs_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
# ament_target_dependencies(aprs_node ${THIS_PACKAGE_INCLUDE_DEPENDS})
# install(TARGETS aprs_node
#   RUNTIME DESTINATION lib/${PROJECT_NAME}
# )

# Add UR commander node
add_executable(aprs_ur_node src/aprs_ur_node.cpp)
target_include_directories(aprs_ur_node PUBLIC include)
target_compile_features(aprs_ur_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
# target_link_libraries(aprs_ur_node
#   ${PROJECT_NAME}
# )
ament_target_dependencies(aprs_ur_node ${THIS_PACKAGE_INCLUDE_DEPENDS})
install(TARGETS aprs_ur_node
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

# Add moveit test executable
add_executable(moveit_test src/moveit_test.cpp)
target_include_directories(moveit_test PUBLIC include)
target_compile_features(moveit_test PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
target_link_libraries(moveit_test
  ${PROJECT_NAME}
)
ament_target_dependencies(moveit_test ${THIS_PACKAGE_INCLUDE_DEPENDS})
install(TARGETS moveit_test
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
)

install(DIRECTORY include/aprs_control
  DESTINATION include
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

# install(TARGETS aprs_node
#   DESTINATION lib/${PROJECT_NAME})

# Install Python modules
ament_python_install_package(${PROJECT_NAME})
# Install Python executables
install(PROGRAMS
  # scripts/point_cloud.py
  DESTINATION lib/${PROJECT_NAME}
)


ament_export_libraries(
  ${PROJECT_NAME}
)
# ament_export_include_directories(
#   include
# )
ament_export_dependencies(
  ${THIS_PACKAGE_INCLUDE_DEPENDS}
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
