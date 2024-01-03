// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__TRAITS_HPP_
#define CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "conveyor_interfaces/msg/detail/conveyor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace conveyor_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConveyorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConveyorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConveyorState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace conveyor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use conveyor_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const conveyor_interfaces::msg::ConveyorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  conveyor_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conveyor_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const conveyor_interfaces::msg::ConveyorState & msg)
{
  return conveyor_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<conveyor_interfaces::msg::ConveyorState>()
{
  return "conveyor_interfaces::msg::ConveyorState";
}

template<>
inline const char * name<conveyor_interfaces::msg::ConveyorState>()
{
  return "conveyor_interfaces/msg/ConveyorState";
}

template<>
struct has_fixed_size<conveyor_interfaces::msg::ConveyorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<conveyor_interfaces::msg::ConveyorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<conveyor_interfaces::msg::ConveyorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__TRAITS_HPP_
