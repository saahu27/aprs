// #include <moveit/move_group_interface/move_group_interface.h>
// #include <rclcpp/rclcpp.hpp>
// #include <rclcpp_action/rclcpp_action.hpp>
// #include <std_msgs/msg/bool.hpp>             // Replace with the subscribed topic message type
// #include <example_interfaces/srv/move_to_pose.hpp> // Replace with your service message type

// class GearPick : public rclcpp::Node
// {
// public:
//     GearPick();

// private:
//     moveit::planning_interface::MoveGroupInterface ur_robot_;
//     moveit::planning_interface::PlanningSceneInterface planning_scene_;
//     rclcpp::Service<example_interfaces::srv::MoveToPose>::SharedPtr move_to_pose_srv_;
//     rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr subscription_; // Replace with the subscribed topic type

//     void move_to_pose_callback(const std::shared_ptr<rmw_request_id_t> request_header,
//                                const std::shared_ptr<example_interfaces::srv::MoveToPose::Request> request,
//                                const std::shared_ptr<example_interfaces::srv::MoveToPose::Response> response);
//     void subscription_callback(const std_msgs::msg::Bool::SharedPtr msg); // Replace with the subscribed topic callback
// };