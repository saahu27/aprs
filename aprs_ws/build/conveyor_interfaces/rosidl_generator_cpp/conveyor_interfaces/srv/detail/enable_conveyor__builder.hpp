// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conveyor_interfaces:srv/EnableConveyor.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__BUILDER_HPP_
#define CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conveyor_interfaces/srv/detail/enable_conveyor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conveyor_interfaces
{

namespace srv
{

namespace builder
{

class Init_EnableConveyor_Request_enable
{
public:
  Init_EnableConveyor_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::conveyor_interfaces::srv::EnableConveyor_Request enable(::conveyor_interfaces::srv::EnableConveyor_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::srv::EnableConveyor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::srv::EnableConveyor_Request>()
{
  return conveyor_interfaces::srv::builder::Init_EnableConveyor_Request_enable();
}

}  // namespace conveyor_interfaces


namespace conveyor_interfaces
{

namespace srv
{

namespace builder
{

class Init_EnableConveyor_Response_message
{
public:
  explicit Init_EnableConveyor_Response_message(::conveyor_interfaces::srv::EnableConveyor_Response & msg)
  : msg_(msg)
  {}
  ::conveyor_interfaces::srv::EnableConveyor_Response message(::conveyor_interfaces::srv::EnableConveyor_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::srv::EnableConveyor_Response msg_;
};

class Init_EnableConveyor_Response_success
{
public:
  Init_EnableConveyor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnableConveyor_Response_message success(::conveyor_interfaces::srv::EnableConveyor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_EnableConveyor_Response_message(msg_);
  }

private:
  ::conveyor_interfaces::srv::EnableConveyor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::srv::EnableConveyor_Response>()
{
  return conveyor_interfaces::srv::builder::Init_EnableConveyor_Response_success();
}

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__BUILDER_HPP_
