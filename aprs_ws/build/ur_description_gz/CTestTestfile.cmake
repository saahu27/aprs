# CMake generated Testfile for 
# Source directory: /home/aprs/aprs/aprs_ws/src/assets/robots/ur5e/ur_description_gz
# Build directory: /home/aprs/aprs/aprs_ws/build/ur_description_gz
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(ur_urdf_xacro "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/aprs/aprs/aprs_ws/build/ur_description_gz/test_results/ur_description_gz/ur_urdf_xacro.xunit.xml" "--package-name" "ur_description_gz" "--output-file" "/home/aprs/aprs/aprs_ws/build/ur_description_gz/ament_cmake_pytest/ur_urdf_xacro.txt" "--command" "/usr/bin/python3.10" "-u" "-m" "pytest" "/home/aprs/aprs/aprs_ws/src/assets/robots/ur5e/ur_description_gz/test/test_ur_urdf_xacro.py" "-o" "cache_dir=/home/aprs/aprs/aprs_ws/build/ur_description_gz/ament_cmake_pytest/ur_urdf_xacro/.cache" "--junit-xml=/home/aprs/aprs/aprs_ws/build/ur_description_gz/test_results/ur_description_gz/ur_urdf_xacro.xunit.xml" "--junit-prefix=ur_description_gz")
set_tests_properties(ur_urdf_xacro PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/aprs/aprs/aprs_ws/build/ur_description_gz" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;169;ament_add_test;/home/aprs/aprs/aprs_ws/src/assets/robots/ur5e/ur_description_gz/CMakeLists.txt;16;ament_add_pytest_test;/home/aprs/aprs/aprs_ws/src/assets/robots/ur5e/ur_description_gz/CMakeLists.txt;0;")
add_test(view_ur_launch "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/aprs/aprs/aprs_ws/build/ur_description_gz/test_results/ur_description_gz/view_ur_launch.xunit.xml" "--package-name" "ur_description_gz" "--output-file" "/home/aprs/aprs/aprs_ws/build/ur_description_gz/ament_cmake_pytest/view_ur_launch.txt" "--command" "/usr/bin/python3.10" "-u" "-m" "pytest" "/home/aprs/aprs/aprs_ws/src/assets/robots/ur5e/ur_description_gz/test/test_view_ur_launch.py" "-o" "cache_dir=/home/aprs/aprs/aprs_ws/build/ur_description_gz/ament_cmake_pytest/view_ur_launch/.cache" "--junit-xml=/home/aprs/aprs/aprs_ws/build/ur_description_gz/test_results/ur_description_gz/view_ur_launch.xunit.xml" "--junit-prefix=ur_description_gz")
set_tests_properties(view_ur_launch PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/home/aprs/aprs/aprs_ws/build/ur_description_gz" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;169;ament_add_test;/home/aprs/aprs/aprs_ws/src/assets/robots/ur5e/ur_description_gz/CMakeLists.txt;17;ament_add_pytest_test;/home/aprs/aprs/aprs_ws/src/assets/robots/ur5e/ur_description_gz/CMakeLists.txt;0;")
