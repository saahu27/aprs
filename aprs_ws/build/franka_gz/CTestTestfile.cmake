# CMake generated Testfile for 
# Source directory: /workspaces/aprs/aprs_ws/src/franka_gz
# Build directory: /workspaces/aprs/aprs_ws/build/franka_gz
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3.10" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/copyright.xunit.xml" "--package-name" "franka_gz" "--output-file" "/workspaces/aprs/aprs_ws/build/franka_gz/ament_copyright/copyright.txt" "--command" "/opt/ros/rolling/bin/ament_copyright" "--xunit-file" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "200" WORKING_DIRECTORY "/workspaces/aprs/aprs_ws/src/franka_gz" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_copyright/cmake/ament_copyright.cmake;51;ament_add_test;/opt/ros/rolling/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;22;ament_copyright;/opt/ros/rolling/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;37;ament_package;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3.10" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/flake8.xunit.xml" "--package-name" "franka_gz" "--output-file" "/workspaces/aprs/aprs_ws/build/franka_gz/ament_flake8/flake8.txt" "--command" "/opt/ros/rolling/bin/ament_flake8" "--xunit-file" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/aprs/aprs_ws/src/franka_gz" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_flake8/cmake/ament_flake8.cmake;69;ament_add_test;/opt/ros/rolling/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;19;ament_flake8;/opt/ros/rolling/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;37;ament_package;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.10" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/lint_cmake.xunit.xml" "--package-name" "franka_gz" "--output-file" "/workspaces/aprs/aprs_ws/build/franka_gz/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/rolling/bin/ament_lint_cmake" "--xunit-file" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/aprs/aprs_ws/src/franka_gz" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/rolling/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/rolling/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;37;ament_package;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3.10" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/pep257.xunit.xml" "--package-name" "franka_gz" "--output-file" "/workspaces/aprs/aprs_ws/build/franka_gz/ament_pep257/pep257.txt" "--command" "/opt/ros/rolling/bin/ament_pep257" "--xunit-file" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/aprs/aprs_ws/src/franka_gz" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/rolling/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/rolling/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;37;ament_package;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.10" "-u" "/opt/ros/rolling/share/ament_cmake_test/cmake/run_test.py" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/xmllint.xunit.xml" "--package-name" "franka_gz" "--output-file" "/workspaces/aprs/aprs_ws/build/franka_gz/ament_xmllint/xmllint.txt" "--command" "/opt/ros/rolling/bin/ament_xmllint" "--xunit-file" "/workspaces/aprs/aprs_ws/build/franka_gz/test_results/franka_gz/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/aprs/aprs_ws/src/franka_gz" _BACKTRACE_TRIPLES "/opt/ros/rolling/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/rolling/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/rolling/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/rolling/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/rolling/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/rolling/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;37;ament_package;/workspaces/aprs/aprs_ws/src/franka_gz/CMakeLists.txt;0;")
