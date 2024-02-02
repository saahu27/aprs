// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from example_interfaces:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__BUILDER_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "example_interfaces/srv/detail/move_to_named_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToNamedPose_Request_pose
{
public:
  Init_MoveToNamedPose_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::srv::MoveToNamedPose_Request pose(::example_interfaces::srv::MoveToNamedPose_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::MoveToNamedPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::MoveToNamedPose_Request>()
{
  return example_interfaces::srv::builder::Init_MoveToNamedPose_Request_pose();
}

}  // namespace example_interfaces


namespace example_interfaces
{

namespace srv
{

namespace builder
{

class Init_MoveToNamedPose_Response_success
{
public:
  Init_MoveToNamedPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::example_interfaces::srv::MoveToNamedPose_Response success(::example_interfaces::srv::MoveToNamedPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::example_interfaces::srv::MoveToNamedPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::example_interfaces::srv::MoveToNamedPose_Response>()
{
  return example_interfaces::srv::builder::Init_MoveToNamedPose_Response_success();
}

}  // namespace example_interfaces

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__BUILDER_HPP_
