# CMake generated Testfile for 
# Source directory: /home/aprs/aprs/aprs_ws/src/gz_ros2_control_tests/tests
# Build directory: /home/aprs/aprs/aprs_ws/build/gz_ros2_control_tests/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_position_controller "/usr/bin/python3.10" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/home/aprs/aprs/aprs_ws/build/gz_ros2_control_tests/test_results/gz_ros2_control_tests/test_position_controller.xunit.xml" "--package-name" "gz_ros2_control_tests" "--output-file" "/home/aprs/aprs/aprs_ws/build/gz_ros2_control_tests/launch_test/test_position_controller.txt" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/home/aprs/aprs/aprs_ws/src/gz_ros2_control_tests/tests/position_test.py" "--junit-xml=/home/aprs/aprs/aprs_ws/build/gz_ros2_control_tests/test_results/gz_ros2_control_tests/test_position_controller.xunit.xml" "--package-name=gz_ros2_control_tests")
set_tests_properties(test_position_controller PROPERTIES  LABELS "launch_test" TIMEOUT "120" WORKING_DIRECTORY "/home/aprs/aprs/aprs_ws/build/gz_ros2_control_tests/tests" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/launch_testing_ament_cmake/cmake/add_launch_test.cmake;131;ament_add_test;/home/aprs/aprs/aprs_ws/src/gz_ros2_control_tests/tests/CMakeLists.txt;3;add_launch_test;/home/aprs/aprs/aprs_ws/src/gz_ros2_control_tests/tests/CMakeLists.txt;0;")
