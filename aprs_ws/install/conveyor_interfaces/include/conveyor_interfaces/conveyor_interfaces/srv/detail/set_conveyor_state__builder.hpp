// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conveyor_interfaces:srv/SetConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__BUILDER_HPP_
#define CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conveyor_interfaces/srv/detail/set_conveyor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conveyor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetConveyorState_Request_direction
{
public:
  explicit Init_SetConveyorState_Request_direction(::conveyor_interfaces::srv::SetConveyorState_Request & msg)
  : msg_(msg)
  {}
  ::conveyor_interfaces::srv::SetConveyorState_Request direction(::conveyor_interfaces::srv::SetConveyorState_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::srv::SetConveyorState_Request msg_;
};

class Init_SetConveyorState_Request_speed
{
public:
  Init_SetConveyorState_Request_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetConveyorState_Request_direction speed(::conveyor_interfaces::srv::SetConveyorState_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SetConveyorState_Request_direction(msg_);
  }

private:
  ::conveyor_interfaces::srv::SetConveyorState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::srv::SetConveyorState_Request>()
{
  return conveyor_interfaces::srv::builder::Init_SetConveyorState_Request_speed();
}

}  // namespace conveyor_interfaces


namespace conveyor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetConveyorState_Response_message
{
public:
  explicit Init_SetConveyorState_Response_message(::conveyor_interfaces::srv::SetConveyorState_Response & msg)
  : msg_(msg)
  {}
  ::conveyor_interfaces::srv::SetConveyorState_Response message(::conveyor_interfaces::srv::SetConveyorState_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::srv::SetConveyorState_Response msg_;
};

class Init_SetConveyorState_Response_success
{
public:
  Init_SetConveyorState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetConveyorState_Response_message success(::conveyor_interfaces::srv::SetConveyorState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetConveyorState_Response_message(msg_);
  }

private:
  ::conveyor_interfaces::srv::SetConveyorState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::srv::SetConveyorState_Response>()
{
  return conveyor_interfaces::srv::builder::Init_SetConveyorState_Response_success();
}

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__BUILDER_HPP_
