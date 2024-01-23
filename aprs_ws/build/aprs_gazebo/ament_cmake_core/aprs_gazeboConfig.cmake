# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_aprs_gazebo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED aprs_gazebo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(aprs_gazebo_FOUND FALSE)
  elseif(NOT aprs_gazebo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(aprs_gazebo_FOUND FALSE)
  endif()
  return()
endif()
set(_aprs_gazebo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT aprs_gazebo_FIND_QUIETLY)
  message(STATUS "Found aprs_gazebo: 0.0.0 (${aprs_gazebo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'aprs_gazebo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${aprs_gazebo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(aprs_gazebo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${aprs_gazebo_DIR}/${_extra}")
endforeach()
