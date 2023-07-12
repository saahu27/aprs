^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package ign_ros2_control
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.1.0 (2023-05-23)
------------------
* Fixed segmentation fault with logger (`#136 <https://github.com/ros-controls/gz_ros2_control/issues/136>`_)
* Disable ROS signal handlers (`#129 <https://github.com/ros-controls/gz_ros2_control/issues/129>`_)
* Contributors: Alejandro Hernández Cordero, Carlo Rizzardo

1.0.0 (2023-03-28)
------------------
* Context and Namespace Handling for Multi-Robot Sim (`#128 <https://github.com/ros-controls/gz_ros2_control/issues/128>`_)
* Install include directory since it is exported (`#127 <https://github.com/ros-controls/gz_ros2_control/issues/127>`_)
* Renamed ign to gz (`#67 <https://github.com/ros-controls/gz_ros2_control/issues/67>`_)
* Contributors: Alejandro Hernández Cordero, Roni Kreinin, Tim Clephas

0.6.1 (2023-02-07)
------------------
* Various bug fixes (`#114 <https://github.com/ros-controls/gz_ros2_control/issues/114>`_)
* Contributors: AndyZe

0.6.0 (2023-01-06)
------------------
* Fix API braking of hardware plugin name. (`#108 <https://github.com/ros-controls/gz_ros2_control/issues/108>`_)
* Galactic to master -- Merge pull request `#103 <https://github.com/ros-controls/gz_ros2_control/issues/103>`_ from ros-controls/ahcorde/galactic_to_main_25_11_2022
* Force setting use_sim_time parameter when using plugin. (`#100 <https://github.com/ros-controls/gz_ros2_control/issues/100>`_) (`#102 <https://github.com/ros-controls/gz_ros2_control/issues/102>`_)
* Force setting use_sim_time parameter when using plugin. (`#100 <https://github.com/ros-controls/gz_ros2_control/issues/100>`_)
* Enable loading params from multiple yaml files (`#94 <https://github.com/ros-controls/gz_ros2_control/issues/94>`_)
* Add support for mimic joints. (`#33 <https://github.com/ros-controls/gz_ros2_control/issues/33>`_)
* Set right initial velocity (`#81 <https://github.com/ros-controls/gz_ros2_control/issues/81>`_)
* Contributors: Alejandro Hernández Cordero, Denis Štogl, Lovro Ivanov

0.5.0 (2022-08-09)
------------------
* Fix setting initial values if command interfaces are not defined. (`#73 <https://github.com/ros-controls/gz_ros2_control/issues/73>`_)
* activated all hardware by default and improved variable naming (`#74 <https://github.com/ros-controls/gz_ros2_control/issues/74>`_)
* Implemented perform_command_mode_switch override in GazeboSystem (`#76 <https://github.com/ros-controls/gz_ros2_control/issues/76>`_)
* Remove warnings (`#72 <https://github.com/ros-controls/gz_ros2_control/issues/72>`_)
* change component name for ignition (`#69 <https://github.com/ros-controls/gz_ros2_control/issues/69>`_)
* Added logic for activating hardware interfaces (`#68 <https://github.com/ros-controls/gz_ros2_control/issues/68>`_)
* Merge branch 'foxy' into ahcorde/foxy_to_galactic_27_05_2022
* Remove URDF dependency (`#56 <https://github.com/ros-controls/gz_ros2_control/issues/56>`_)
* Adapt to ROS 2 Humble
* typo in citadel name (`#54 <https://github.com/ros-controls/gz_ros2_control/issues/54>`_)
* typo in citadel name (`#51 <https://github.com/ros-controls/gz_ros2_control/issues/51>`_)
* ros2_control is now having usings under its namespace. (`#43 <https://github.com/ros-controls/gz_ros2_control/issues/43>`_)
* Fix default ign gazebo version Rolling (`#45 <https://github.com/ros-controls/gz_ros2_control/issues/45>`_)
* Fix ignition version in package.xml - Rolling (`#41 <https://github.com/ros-controls/gz_ros2_control/issues/41>`_)
* Fixed position control (`#29 <https://github.com/ros-controls/gz_ros2_control/issues/29>`_)
* Add support for initial_values for hardware interfaces when starting simulation. (`#27 <https://github.com/ros-controls/gz_ros2_control/issues/27>`_)
* Contributors: Alejandro Hernández Cordero, Denis Štogl, Guillaume Beuzeboc, Tianyu Li

0.4.1 (2022-06-06)
------------------
* Remove URDF dependency (`#56 <https://github.com/ignitionrobotics/ign_ros2_control/issues/56>`_)
* typo in citadel name (`#54 <https://github.com/ignitionrobotics/ign_ros2_control/issues/54>`_)
* Contributors: Alejandro Hernández Cordero, Guillaume Beuzeboc, ahcorde

0.4.0 (2022-03-18)
------------------
* Fix default ign gazebo version Galactic (`#44 <https://github.com/ignitionrobotics/ign_ros2_control/issues/44>`_)
* Contributors: Alejandro Hernández Cordero

0.3.0 (2022-03-16)
------------------
* Fix ignition version in package.xml (`#40 <https://github.com/ignitionrobotics/ign_ros2_control/issues/40>`_)
* Contributors: Alejandro Hernández Cordero

0.2.0 (2022-02-17)
------------------
* Merge pull request `#36 <https://github.com/ignitionrobotics/ign_ros2_control/issues/36>`_ from ignitionrobotics/ahcorde/foxy_to_galactic
  Foxy -> Galactic
* Merge remote-tracking branch 'origin/foxy' into ahcorde/foxy_to_galactic
* Fixed position control (`#29 <https://github.com/ignitionrobotics/ign_ros2_control/issues/29>`_)
* typo fix. (`#25 <https://github.com/ignitionrobotics/ign_ros2_control/issues/25>`_)
* Contributors: Alejandro Hernández Cordero, Tomoya Fujita

0.1.2 (2022-02-14)
------------------
* Fixed position control (`#29 <https://github.com/ignitionrobotics/ign_ros2_control/issues/29>`_) (`#34 <https://github.com/ignitionrobotics/ign_ros2_control/issues/34>`_)
* typo fix. (`#25 <https://github.com/ignitionrobotics/ign_ros2_control/issues/25>`_) (`#26 <https://github.com/ignitionrobotics/ign_ros2_control/issues/26>`_)
  Co-authored-by: Tomoya Fujita <Tomoya.Fujita@sony.com>
* Contributors: Alejandro Hernández Cordero

0.1.1 (2022-01-07)
------------------
* Change package names from ignition\_ to ign\_ (`#19 <https://github.com/ignitionrobotics/ign_ros2_control/pull/22>`_)
  * Change package names from ignition\_ to ign\_
* Contributors: Alejandro Hernández Cordero

0.1.0 (2022-01-07)
------------------
* Ignition ros2 control (`#1 <https://github.com/ignitionrobotics/ign_ros2_control/issues/1>`_)
  Co-authored-by: ahcorde <ahcorde@gmail.com>
  Co-authored-by: Louise Poubel <louise@openrobotics.org>
  Co-authored-by: Vatan Aksoy Tezer <vatan@picknik.ai>
* Contributors: Alejandro Hernández Cordero, Louise Poubel, Vatan Aksoy Tezer
