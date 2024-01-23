#include <rclcpp/qos.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

#include <unistd.h>

#include <cmath>

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

class gearpick : public rclcpp::Node
{
public:
  /// Constructor
  gearpick();

  ~gearpick();

  // Floor Robot Public Functions
  void UrRobotSendHome();

private:
  // Robot Move Functions
  bool UrRobotMovetoTarget();
  bool UrRobotMoveCartesian(std::vector<geometry_msgs::msg::Pose> waypoints, double vsf, double asf);

  geometry_msgs::msg::Quaternion SetRobotOrientation(double rotation);

  // Helper Functions
  void LogPose(geometry_msgs::msg::Pose p);
  geometry_msgs::msg::Pose MultiplyPose(geometry_msgs::msg::Pose p1, geometry_msgs::msg::Pose p2);
  geometry_msgs::msg::Pose BuildPose(double x, double y, double z, geometry_msgs::msg::Quaternion orientation);
  geometry_msgs::msg::Pose FrameWorldPose(std::string frame_id);
  double GetYaw(geometry_msgs::msg::Pose pose);
  geometry_msgs::msg::Quaternion QuaternionFromRPY(double r, double p, double y);
  

  void AddModelToPlanningScene(std::string name, std::string mesh_file, geometry_msgs::msg::Pose model_pose);
  void AddModelsToPlanningScene();

  // Callback Groups
  rclcpp::CallbackGroup::SharedPtr client_cb_group_;
  rclcpp::CallbackGroup::SharedPtr topic_cb_group_;

  // MoveIt Interfaces 
  moveit::planning_interface::MoveGroupInterface ur_robot_;
  
  moveit::planning_interface::PlanningSceneInterface planning_scene_;

  trajectory_processing::TimeOptimalTrajectoryGeneration totg_;

  // TF
  std::unique_ptr<tf2_ros::Buffer> tf_buffer = std::make_unique<tf2_ros::Buffer>(get_clock());
  std::shared_ptr<tf2_ros::TransformListener> tf_listener = std::make_shared<tf2_ros::TransformListener>(*tf_buffer);
  };