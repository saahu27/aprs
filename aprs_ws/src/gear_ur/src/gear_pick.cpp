#include </home/aprs/aprs/aprs_ws/src/gear_ur/include/gear_pick.hpp>

gearpick::gearpick()
    : Node("gear_pick"),
      ur_robot_(std::shared_ptr<rclcpp::Node>(std::move(this)), "ur_manipulator"),
      planning_scene_()
{

  // Subscribe to topics
  rclcpp::SubscriptionOptions options;

  topic_cb_group_ = create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

  options.callback_group = topic_cb_group_;

  RCLCPP_INFO(this->get_logger(), "Initialization successful.");
}

gearpick::~gearpick()
{
  ur_robot_.~MoveGroupInterface();
}


void gearpick::UrRobotSendHome()
{

  ur_robot_.setNamedTarget("home");
  UrRobotMovetoTarget();
}

bool gearpick::UrRobotMovetoTarget()
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

bool gearpick::UrRobotMoveCartesian(
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
  robot_trajectory::RobotTrajectory rt(ur_robot_.getCurrentState()->getRobotModel(), "ur_manipulator");
  rt.setRobotTrajectoryMsg(*ur_robot_.getCurrentState(), trajectory);
  totg_.computeTimeStamps(rt, vsf, asf);
  rt.getRobotTrajectoryMsg(trajectory);

  return static_cast<bool>(ur_robot_.execute(trajectory));
}




void gearpick::AddModelToPlanningScene(
    std::string name, std::string mesh_file, geometry_msgs::msg::Pose model_pose)
{
  moveit_msgs::msg::CollisionObject collision;

  collision.id = name;
  collision.header.frame_id = "world";

  shape_msgs::msg::Mesh mesh;
  shapes::ShapeMsg mesh_msg;

  std::string package_share_directory = ament_index_cpp::get_package_share_directory("gear_ur");
  std::stringstream path;
  path << "file://" << package_share_directory << "/meshes/" << mesh_file;
  std::string model_path = path.str();

  shapes::Mesh *m = shapes::createMeshFromResource(model_path);
  shapes::constructMsgFromShape(m, mesh_msg);

  mesh = boost::get<shape_msgs::msg::Mesh>(mesh_msg);

  collision.meshes.push_back(mesh);
  collision.mesh_poses.push_back(model_pose);

  collision.operation = collision.ADD;

  std::vector<moveit_msgs::msg::CollisionObject> collision_objects;
  collision_objects.push_back(collision);

  planning_scene_.addCollisionObjects(collision_objects);
}

void gearpick::AddModelsToPlanningScene()
{

  // geometry_msgs::msg::Pose conveyor_pose;
  // conveyor_pose.position.x = -0.6;
  // conveyor_pose.position.y = 0;
  // conveyor_pose.position.z = 0;
  // conveyor_pose.orientation = QuaternionFromRPY(0, 0, 0);

  // AddModelToPlanningScene("conveyor", "conveyor.stl", conveyor_pose);
}

// geometry_msgs::msg::Pose gearpick::MultiplyPose(
//     geometry_msgs::msg::Pose p1, geometry_msgs::msg::Pose p2)
// {
//   KDL::Frame f1;
//   KDL::Frame f2;

//   tf2::fromMsg(p1, f1);
//   tf2::fromMsg(p2, f2);

//   KDL::Frame f3 = f1 * f2;

//   return tf2::toMsg(f3);
// }

// void gearpick::LogPose(geometry_msgs::msg::Pose p)
// {
//   tf2::Quaternion q(
//       p.orientation.x,
//       p.orientation.y,
//       p.orientation.z,
//       p.orientation.w);
//   tf2::Matrix3x3 m(q);
//   double roll, pitch, yaw;
//   m.getRPY(roll, pitch, yaw);

//   roll *= 180 / M_PI;
//   pitch *= 180 / M_PI;
//   yaw *= 180 / M_PI;

//   RCLCPP_INFO(get_logger(), "(X: %.2f, Y: %.2f, Z: %.2f, R: %.2f, P: %.2f, Y: %.2f)",
//               p.position.x, p.position.y, p.position.z,
//               roll, pitch, yaw);
// }

// geometry_msgs::msg::Pose gearpick::BuildPose(
//     double x, double y, double z, geometry_msgs::msg::Quaternion orientation)
// {
//   geometry_msgs::msg::Pose pose;
//   pose.position.x = x;
//   pose.position.y = y;
//   pose.position.z = z;
//   pose.orientation = orientation;

//   return pose;
// }

// geometry_msgs::msg::Pose gearpick::FrameWorldPose(std::string frame_id)
// {
//   geometry_msgs::msg::TransformStamped t;
//   geometry_msgs::msg::Pose pose;

//   try
//   {
//     t = tf_buffer->lookupTransform("world", frame_id, tf2::TimePointZero);
//   }
//   catch (const tf2::TransformException &ex)
//   {
//     RCLCPP_ERROR(get_logger(), "Could not get transform");
//   }

//   pose.position.x = t.transform.translation.x;
//   pose.position.y = t.transform.translation.y;
//   pose.position.z = t.transform.translation.z;
//   pose.orientation = t.transform.rotation;

//   return pose;
// }

// double gearpick::GetYaw(geometry_msgs::msg::Pose pose)
// {
//   tf2::Quaternion q(
//       pose.orientation.x,
//       pose.orientation.y,
//       pose.orientation.z,
//       pose.orientation.w);
//   tf2::Matrix3x3 m(q);
//   double roll, pitch, yaw;
//   m.getRPY(roll, pitch, yaw);

//   return yaw;
// }

// geometry_msgs::msg::Quaternion gearpick::QuaternionFromRPY(double r, double p, double y)
// {
//   tf2::Quaternion q;
//   geometry_msgs::msg::Quaternion q_msg;

//   q.setRPY(r, p, y);

//   q_msg.x = q.x();
//   q_msg.y = q.y();
//   q_msg.z = q.z();
//   q_msg.w = q.w();

//   return q_msg;
// }

// geometry_msgs::msg::Quaternion gearpick::SetRobotOrientation(double rotation)
// {
//   tf2::Quaternion tf_q;
//   tf_q.setRPY(0, 3.14159, rotation);

//   geometry_msgs::msg::Quaternion q;

//   q.x = tf_q.x();
//   q.y = tf_q.y();
//   q.z = tf_q.z();
//   q.w = tf_q.w();

//   return q;
// }







