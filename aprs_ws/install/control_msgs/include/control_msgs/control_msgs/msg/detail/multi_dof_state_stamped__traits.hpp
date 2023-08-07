// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:msg/MultiDOFStateStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "control_msgs/msg/multi_dof_state_stamped.hpp"


#ifndef CONTROL_MSGS__MSG__DETAIL__MULTI_DOF_STATE_STAMPED__TRAITS_HPP_
#define CONTROL_MSGS__MSG__DETAIL__MULTI_DOF_STATE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "control_msgs/msg/detail/multi_dof_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'dof_states'
#include "control_msgs/msg/detail/single_dof_state__traits.hpp"

namespace control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MultiDOFStateStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dof_states
  {
    if (msg.dof_states.size() == 0) {
      out << "dof_states: []";
    } else {
      out << "dof_states: [";
      size_t pending_items = msg.dof_states.size();
      for (auto item : msg.dof_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MultiDOFStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: dof_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dof_states.size() == 0) {
      out << "dof_states: []\n";
    } else {
      out << "dof_states:\n";
      for (auto item : msg.dof_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MultiDOFStateStamped & msg, bool use_flow_style = false)
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

}  // namespace control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const control_msgs::msg::MultiDOFStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const control_msgs::msg::MultiDOFStateStamped & msg)
{
  return control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<control_msgs::msg::MultiDOFStateStamped>()
{
  return "control_msgs::msg::MultiDOFStateStamped";
}

template<>
inline const char * name<control_msgs::msg::MultiDOFStateStamped>()
{
  return "control_msgs/msg/MultiDOFStateStamped";
}

template<>
struct has_fixed_size<control_msgs::msg::MultiDOFStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<control_msgs::msg::MultiDOFStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<control_msgs::msg::MultiDOFStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CONTROL_MSGS__MSG__DETAIL__MULTI_DOF_STATE_STAMPED__TRAITS_HPP_
