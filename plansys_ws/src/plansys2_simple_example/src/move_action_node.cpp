// Copyright 2019 Intelligent Robotics Lab
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>
#include <algorithm>

#include "plansys2_executor/ActionExecutorClient.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
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

#include "std_msgs/msg/string.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using namespace std::chrono_literals;

class MoveAction : public plansys2::ActionExecutorClient
{
public:
  MoveAction()
      : plansys2::ActionExecutorClient("move", 250ms)
        // ur_robot_(std::shared_ptr<rclcpp_lifecycle::LifecycleNode>(std::move(this)), "ur_manipulator"),
        // ur_robot_(std::shared_ptr<rclcpp::Node>(std::move(this)), "ur_manipulator"),
        // planning_scene_()
  {
    progress_ = 0.0;

    // publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);

    
  }

private:
  void do_work()
  {
    if (progress_ < 1.0) {
      progress_ += 0.02;
      send_feedback(progress_, "Move running");





      // ur_robot_.setNamedTarget("home");
      // moveit::planning_interface::MoveGroupInterface::Plan plan;
      // bool success = static_cast<bool>(ur_robot_.plan(plan));

      // if (success)
      // {
      //   static_cast<bool>(ur_robot_.execute(plan));
      // }
      // else
      // {
      //   RCLCPP_ERROR(get_logger(), "Unable to generate plan");
      // }
      std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("move_to_pose_client");
      rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr client_ =
          node->create_client<std_srvs::srv::Trigger>("move_to_pose");

      // Create and send request
      auto request = std::make_shared<std_srvs::srv::Trigger::Request>();
      // request->data = true; // Trigger the move (assuming service uses a simple trigger)
      auto future = client_->async_send_request(request);

      // Wait for and handle response
      auto result = future.get();
      if (result.get()->success)
      {
        RCLCPP_INFO(this->get_logger(), "Arm moved to target pose successfully");
      }
      else
      {
        RCLCPP_ERROR(this->get_logger(), "Moving arm failed: %s", result.get()->message.c_str());
      }

      // std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_client");
      // rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client =
      //     node->create_client<example_interfaces::srv::AddTwoInts>("add_two_ints");

      // auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
      // request->a = 5;
      // request->b = 10;

      // while (!client->wait_for_service(1s))
      // {
      //   if (!rclcpp::ok())
      //   {
      //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      //   }
      //   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
      // }

      // auto result = client->async_send_request(request);
      // // Wait for the result.
      // if (rclcpp::spin_until_future_complete(node, result) ==
      //     rclcpp::FutureReturnCode::SUCCESS)
      // {
      //   RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %ld", result.get()->sum);
      // }
      // else
      // {
      //   RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
      // }

    } else {
      finish(true, 1.0, "Move completed");

      progress_ = 0.0;
      std::cout << std::endl;
    }

    std::cout << "\r\e[K" << std::flush;
    std::cout << "Moving ... [" << std::min(100.0, progress_ * 100.0) << "%]  " <<
      std::flush;
  }

  float progress_;
  // moveit::planning_interface::MoveGroupInterface ur_robot_;

  // moveit::planning_interface::PlanningSceneInterface planning_scene_;

  // trajectory_processing::TimeOptimalTrajectoryGeneration totg_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MoveAction>();
  // auto node2 = std::shared_ptr<rclcpp::Node>(std::move(node))

  node->set_parameter(rclcpp::Parameter("action_name", "move"));
  node->trigger_transition(lifecycle_msgs::msg::Transition::TRANSITION_CONFIGURE);

  rclcpp::spin(node->get_node_base_interface());
  // rclcpp::executors::MultiThreadedExecutor executor;
  // executor.add_node(node->get_node_base_interface());
  // std::thread([&executor]()
  //             { executor.spin(); })
  //     .detach();
  rclcpp::shutdown();

  return 0;
}
