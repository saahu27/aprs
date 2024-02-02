#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <std_srvs/srv/trigger.hpp>   // Assuming a trigger service for simplicity
#include <geometry_msgs/msg/pose.hpp> // Assuming pose is received as geometry_msgs/Pose
#include <rclcpp/qos.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

#include <unistd.h>

#include <cmath>

#include <memory>

#include <ament_index_cpp/get_package_share_directory.hpp>

#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit/trajectory_processing/time_optimal_trajectory_generation.h>
#include <moveit_msgs/msg/collision_object.hpp>

#include <geometric_shapes/shapes.h>
#include <geometric_shapes/shape_operations.h>
#include <shape_msgs/msg/mesh.h>

#include "tf2/exceptions.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"

#include <kdl/frames.hpp>
// #include <tf2_kdl/tf2_kdl.h>

#include <std_srvs/srv/trigger.hpp>

#include <geometry_msgs/msg/pose.hpp>

class ArmMover : public rclcpp::Node
{
public:
    ArmMover() : Node("arm_mover"),
                ur_robot_(std::shared_ptr<rclcpp::Node>(std::move(this)), "ur_arm"),
                planning_scene_()
    {
        // // Create a shared pointer to the MoveGroupInterface
        // move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
        //     "manipulator" // Replace with your robot's planning group
        // );

        // Create a service server for moving to poses
        move_to_pose_srv_ = this->create_service<std_srvs::srv::Trigger>(
            "move_to_pose",
            std::bind(&ArmMover::move_to_pose_cb, this, std::placeholders::_1, std::placeholders::_2));

        // Subscribe to the pose topic
        // pose_sub_ = this->create_subscription<geometry_msgs::msg::Pose>(
        //     "pose_topic", 10, std::bind(&ArmMover::pose_cb, this, std::placeholders::_1));

        target_pose_.position.x = 0.5;
        target_pose_.position.y = 0.5;
        target_pose_.position.z = 0.5;
        target_pose_.orientation.x = 0.0;
        target_pose_.orientation.y = 0.0;
        target_pose_.orientation.z = 0.0;
        target_pose_.orientation.w = 1.0;
    }

private:
    moveit::planning_interface::MoveGroupInterface ur_robot_;
    moveit::planning_interface::PlanningSceneInterface planning_scene_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr move_to_pose_srv_;
    rclcpp::Subscription<geometry_msgs::msg::Pose>::SharedPtr pose_sub_;

    geometry_msgs::msg::Pose target_pose_; // Store received pose

    

    void move_to_pose_cb(const std::shared_ptr<std_srvs::srv::Trigger::Request> request,
                         std::shared_ptr<std_srvs::srv::Trigger::Response> response)
    {
        ur_robot_.setPoseTarget(target_pose_);
        moveit::planning_interface::MoveGroupInterface::Plan plan;
        if (ur_robot_.plan(plan) == moveit::core::MoveItErrorCode::SUCCESS)
        {
            ur_robot_.execute(plan);
            response->success = true;
            response->message = "Moved to target pose successfully";
        }
        else
        {
            response->success = false;
            response->message = "Failed to plan or execute motion";
        }
    }

    // void pose_cb(const geometry_msgs::msg::Pose::SharedPtr pose_msg)
    // {
    //     target_pose_ = *pose_msg; // Store the received pose
    // }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ArmMover>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}