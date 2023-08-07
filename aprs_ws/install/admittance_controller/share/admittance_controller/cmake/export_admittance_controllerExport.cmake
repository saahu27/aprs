# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget admittance_controller::admittance_controller admittance_controller::admittance_controller_parameters)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target admittance_controller::admittance_controller
add_library(admittance_controller::admittance_controller SHARED IMPORTED)

set_target_properties(admittance_controller::admittance_controller PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/admittance_controller;/usr/include/eigen3"
  INTERFACE_LINK_LIBRARIES "admittance_controller::admittance_controller_parameters;angles::angles;control_msgs::control_msgs__rosidl_generator_c;control_msgs::control_msgs__rosidl_typesupport_fastrtps_c;control_msgs::control_msgs__rosidl_generator_cpp;control_msgs::control_msgs__rosidl_typesupport_fastrtps_cpp;control_msgs::control_msgs__rosidl_typesupport_introspection_c;control_msgs::control_msgs__rosidl_typesupport_c;control_msgs::control_msgs__rosidl_typesupport_introspection_cpp;control_msgs::control_msgs__rosidl_typesupport_cpp;control_msgs::control_msgs__rosidl_generator_py;control_toolbox::control_toolbox;controller_interface::controller_interface;geometry_msgs::geometry_msgs__rosidl_generator_c;geometry_msgs::geometry_msgs__rosidl_typesupport_fastrtps_c;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_c;geometry_msgs::geometry_msgs__rosidl_typesupport_c;geometry_msgs::geometry_msgs__rosidl_generator_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_fastrtps_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_cpp;geometry_msgs::geometry_msgs__rosidl_generator_py;hardware_interface::fake_components;hardware_interface::mock_components;hardware_interface::hardware_interface;joint_trajectory_controller::joint_trajectory_controller;joint_trajectory_controller::joint_trajectory_controller_parameters;kinematics_interface::kinematics_interface;pluginlib::pluginlib;rclcpp::rclcpp;rclcpp_lifecycle::rclcpp_lifecycle;realtime_tools::realtime_tools;realtime_tools::thread_priority;tf2::tf2;tf2_eigen::tf2_eigen;tf2_geometry_msgs::tf2_geometry_msgs;tf2_kdl::tf2_kdl;tf2_ros::tf2_ros;tf2_ros::static_transform_broadcaster_node;trajectory_msgs::trajectory_msgs__rosidl_generator_c;trajectory_msgs::trajectory_msgs__rosidl_typesupport_fastrtps_c;trajectory_msgs::trajectory_msgs__rosidl_generator_cpp;trajectory_msgs::trajectory_msgs__rosidl_typesupport_fastrtps_cpp;trajectory_msgs::trajectory_msgs__rosidl_typesupport_introspection_c;trajectory_msgs::trajectory_msgs__rosidl_typesupport_c;trajectory_msgs::trajectory_msgs__rosidl_typesupport_introspection_cpp;trajectory_msgs::trajectory_msgs__rosidl_typesupport_cpp;trajectory_msgs::trajectory_msgs__rosidl_generator_py"
)

# Create imported target admittance_controller::admittance_controller_parameters
add_library(admittance_controller::admittance_controller_parameters INTERFACE IMPORTED)

set_target_properties(admittance_controller::admittance_controller_parameters PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include/admittance_controller_parameters"
  INTERFACE_LINK_LIBRARIES "fmt::fmt;parameter_traits::parameter_traits;rclcpp::rclcpp;rclcpp_lifecycle::rclcpp_lifecycle;rsl::rsl;tcb_span::tcb_span;tl_expected::tl_expected"
)

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/export_admittance_controllerExport-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
