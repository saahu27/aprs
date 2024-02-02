#include </workspaces/aprs/aprs_ws/src/gear_ur/include/gear_pick.hpp>

#include <rclcpp/rclcpp.hpp>

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);

  auto gear_pick = std::make_shared<gearpick>();

  rclcpp::executors::MultiThreadedExecutor executor;
  executor.add_node(gear_pick);
  std::thread([&executor]() { executor.spin(); }).detach();

  // Move Robots to Home Poses
  gear_pick->UrRobotSendHome();

  RCLCPP_INFO_STREAM(gear_pick->get_logger(), "Moved to home");

  rclcpp::shutdown();
}