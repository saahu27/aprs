// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__BUILDER_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "conveyor_interfaces/msg/detail/conveyor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace conveyor_interfaces
{

namespace msg
{

namespace builder
{

class Init_ConveyorState_direction
{
public:
  explicit Init_ConveyorState_direction(::conveyor_interfaces::msg::ConveyorState & msg)
  : msg_(msg)
  {}
  ::conveyor_interfaces::msg::ConveyorState direction(::conveyor_interfaces::msg::ConveyorState::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::conveyor_interfaces::msg::ConveyorState msg_;
};

class Init_ConveyorState_speed
{
public:
  explicit Init_ConveyorState_speed(::conveyor_interfaces::msg::ConveyorState & msg)
  : msg_(msg)
  {}
  Init_ConveyorState_direction speed(::conveyor_interfaces::msg::ConveyorState::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_ConveyorState_direction(msg_);
  }

private:
  ::conveyor_interfaces::msg::ConveyorState msg_;
};

class Init_ConveyorState_enabled
{
public:
  Init_ConveyorState_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConveyorState_speed enabled(::conveyor_interfaces::msg::ConveyorState::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_ConveyorState_speed(msg_);
  }

private:
  ::conveyor_interfaces::msg::ConveyorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::conveyor_interfaces::msg::ConveyorState>()
{
  return conveyor_interfaces::msg::builder::Init_ConveyorState_enabled();
}

}  // namespace conveyor_interfaces

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__BUILDER_HPP_
