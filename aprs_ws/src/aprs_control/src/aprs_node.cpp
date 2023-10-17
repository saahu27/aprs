#include <aprs_control/aprs_node.hpp>

AprsCommander::AprsCommander() : Node("Aprs_Commander"),
                                 ur_robot_(std::shared_ptr<rclcpp::Node>(std::move(this)), "ur_arm"),
                                 franka_robot_(std::shared_ptr<rclcpp::Node>(std::move(this)), "franka_arm"),
                                 planning_scene_()
    {
        ur_robot_.setMaxAccelerationScalingFactor(1.0);
        ur_robot_.setMaxVelocityScalingFactor(1.0);

        franka_robot_.setMaxAccelerationScalingFactor(1.0);
        franka_robot_.setMaxVelocityScalingFactor(1.0);

        // Subscribe to topics
        rclcpp::SubscriptionOptions options;

        topic_cb_group_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

        options.callback_group = topic_cb_group_;

        RCLCPP_INFO(this->get_logger(), "Initialization successful.");
    }

AprsCommander::~AprsCommander() {
    ur_robot_.~MoveGroupInterface();
    franka_robot_.~MoveGroupInterface();
}

bool AprsCommander::UrMovetoTarget()
{
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = static_cast<bool>(ur_robot_.plan(plan));

    if (success)
    {
        return static_cast<bool>(ur_robot_.execute(plan));
    }
    else
    {
        RCLCPP_ERROR(get_logger(), "Unable to generate plan");
        return false;
    }
}

bool AprsCommander::UrMoveCartesian(
    std::vector<geometry_msgs::msg::Pose> waypoints, double vsf, double asf)
{
    moveit_msgs::msg::RobotTrajectory trajectory;

    double path_fraction = ur_robot_.computeCartesianPath(waypoints, 0.01, 0.0, trajectory);

    if (path_fraction < 0.9)
    {
        RCLCPP_ERROR(get_logger(), "Unable to generate trajectory through waypoints");
        return false;
    }

    // Retime trajectory
    robot_trajectory::RobotTrajectory rt(ur_robot_.getCurrentState()->getRobotModel(), "ur_arm");
    rt.setRobotTrajectoryMsg(*ur_robot_.getCurrentState(), trajectory);
    totg_.computeTimeStamps(rt, vsf, asf);
    rt.getRobotTrajectoryMsg(trajectory);

    return static_cast<bool>(ur_robot_.execute(trajectory));
}

void AprsCommander::UrSendHome()
{
    // Move floor robot to home joint state
    ur_robot_.setNamedTarget("home");
    UrMovetoTarget();
}

bool AprsCommander::FrankaMovetoTarget()
{
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = static_cast<bool>(franka_robot_.plan(plan));

    if (success)
    {
        return static_cast<bool>(franka_robot_.execute(plan));
    }
    else
    {
        RCLCPP_ERROR(get_logger(), "Unable to generate plan");
        return false;
    }
}

bool AprsCommander::FrankaMoveCartesian(
    std::vector<geometry_msgs::msg::Pose> waypoints, double vsf, double asf)
{
    moveit_msgs::msg::RobotTrajectory trajectory;

    double path_fraction = franka_robot_.computeCartesianPath(waypoints, 0.01, 0.0, trajectory);

    if (path_fraction < 0.9)
    {
        RCLCPP_ERROR(get_logger(), "Unable to generate trajectory through waypoints");
        return false;
    }

    // Retime trajectory
    robot_trajectory::RobotTrajectory rt(franka_robot_.getCurrentState()->getRobotModel(), "franka_arm");
    rt.setRobotTrajectoryMsg(*franka_robot_.getCurrentState(), trajectory);
    totg_.computeTimeStamps(rt, vsf, asf);
    rt.getRobotTrajectoryMsg(trajectory);

    return static_cast<bool>(franka_robot_.execute(trajectory));
}

void AprsCommander::FrankaSendHome()
{
    // Move floor robot to home joint state
    franka_robot_.setNamedTarget("home");
    FrankaMovetoTarget();
}