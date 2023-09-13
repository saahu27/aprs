# CMake generated Testfile for 
# Source directory: /workspaces/aprs_humble/aprs_ws/src/Universal_Robots_ROS2_Driver/ur_calibration
# Build directory: /workspaces/aprs_humble/aprs_ws/build/ur_calibration
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(calibration_test "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/workspaces/aprs_humble/aprs_ws/build/ur_calibration/test_results/ur_calibration/calibration_test.gtest.xml" "--package-name" "ur_calibration" "--output-file" "/workspaces/aprs_humble/aprs_ws/build/ur_calibration/ament_cmake_gmock/calibration_test.txt" "--command" "/workspaces/aprs_humble/aprs_ws/build/ur_calibration/calibration_test" "--gtest_output=xml:/workspaces/aprs_humble/aprs_ws/build/ur_calibration/test_results/ur_calibration/calibration_test.gtest.xml")
set_tests_properties(calibration_test PROPERTIES  LABELS "gmock" REQUIRED_FILES "/workspaces/aprs_humble/aprs_ws/build/ur_calibration/calibration_test" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/aprs_humble/aprs_ws/build/ur_calibration" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;106;ament_add_test;/opt/ros/humble/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;52;_ament_add_gmock;/workspaces/aprs_humble/aprs_ws/src/Universal_Robots_ROS2_Driver/ur_calibration/CMakeLists.txt;84;ament_add_gmock;/workspaces/aprs_humble/aprs_ws/src/Universal_Robots_ROS2_Driver/ur_calibration/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
