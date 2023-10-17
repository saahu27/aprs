#include <aprs_control/aprs_node.hpp>

#include <rclcpp/rclcpp.hpp>

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    auto aprs_commander = std::make_shared<AprsCommander>();

    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(aprs_commander);
    std::thread([&executor]()
                { executor.spin(); })
        .detach();

    // Send Robots to home position
    aprs_commander->UrSendHome();
    aprs_commander->FrankaSendHome();

    // Shutdown ROS
    rclcpp::shutdown();
    return 0;
}