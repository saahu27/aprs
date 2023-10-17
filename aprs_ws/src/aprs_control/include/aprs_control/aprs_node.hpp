#include <rclcpp/qos.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

#include <ament_index_cpp/get_package_share_directory.hpp>

#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <moveit/trajectory_processing/time_optimal_trajectory_generation.h>
#include <moveit_msgs/msg/collision_object.hpp>

#include "tf2/exceptions.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"


class AprsCommander : public rclcpp::Node {
    public:
        AprsCommander();

        ~AprsCommander();

        void UrSendHome();

        void FrankaSendHome();
    
    private:

        bool UrMovetoTarget();
        bool UrMoveCartesian(std::vector<geometry_msgs::msg::Pose> waypoints, double vsf, double asf);

        bool FrankaMovetoTarget();
        bool FrankaMoveCartesian(std::vector<geometry_msgs::msg::Pose> waypoints, double vsf, double asf);

        // Callback Groups
        rclcpp::CallbackGroup::SharedPtr client_cb_group_;
        rclcpp::CallbackGroup::SharedPtr topic_cb_group_;

        // MoveIt Interfaces
        moveit::planning_interface::MoveGroupInterface ur_robot_;
        moveit::planning_interface::MoveGroupInterface franka_robot_;

        moveit::planning_interface::PlanningSceneInterface planning_scene_;

        trajectory_processing::TimeOptimalTrajectoryGeneration totg_;

        // TF
        std::unique_ptr<tf2_ros::Buffer> tf_buffer = std::make_unique<tf2_ros::Buffer>(get_clock());
        std::shared_ptr<tf2_ros::TransformListener> tf_listener = std::make_shared<tf2_ros::TransformListener>(*tf_buffer);
};