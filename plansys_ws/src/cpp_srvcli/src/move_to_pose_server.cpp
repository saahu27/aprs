// #include "header_file.hpp"

// GearPick::GearPick()
//     : Node("gear_pick"),
//       ur_robot_(std::shared_ptr<rclcpp::Node>(std::move(this)), "ur_arm"),
//       planning_scene_()
// {
//     // Create the service
//     move_to_pose_srv_ = create_service<example_interfaces::srv::MoveToPose>("move_to_pose", std::bind(&GearPick::move_to_pose_callback, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));

//     // Subscribe to the desired topic
//     // Replace with the actual topic name and callback function
//     subscription_ = create_subscription<std_msgs::msg::Bool>("/trigger_topic", 10, std::bind(&GearPick::subscription_callback, this, std::placeholders::_1));
// }