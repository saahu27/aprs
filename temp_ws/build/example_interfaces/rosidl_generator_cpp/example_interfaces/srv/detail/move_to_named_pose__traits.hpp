// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from example_interfaces:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__TRAITS_HPP_
#define EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "example_interfaces/srv/detail/move_to_named_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace example_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToNamedPose_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToNamedPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose: ";
    rosidl_generator_traits::value_to_yaml(msg.pose, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToNamedPose_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use example_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const example_interfaces::srv::MoveToNamedPose_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  example_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use example_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const example_interfaces::srv::MoveToNamedPose_Request & msg)
{
  return example_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<example_interfaces::srv::MoveToNamedPose_Request>()
{
  return "example_interfaces::srv::MoveToNamedPose_Request";
}

template<>
inline const char * name<example_interfaces::srv::MoveToNamedPose_Request>()
{
  return "example_interfaces/srv/MoveToNamedPose_Request";
}

template<>
struct has_fixed_size<example_interfaces::srv::MoveToNamedPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<example_interfaces::srv::MoveToNamedPose_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<example_interfaces::srv::MoveToNamedPose_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace example_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MoveToNamedPose_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveToNamedPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveToNamedPose_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace example_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use example_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const example_interfaces::srv::MoveToNamedPose_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  example_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use example_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const example_interfaces::srv::MoveToNamedPose_Response & msg)
{
  return example_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<example_interfaces::srv::MoveToNamedPose_Response>()
{
  return "example_interfaces::srv::MoveToNamedPose_Response";
}

template<>
inline const char * name<example_interfaces::srv::MoveToNamedPose_Response>()
{
  return "example_interfaces/srv/MoveToNamedPose_Response";
}

template<>
struct has_fixed_size<example_interfaces::srv::MoveToNamedPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<example_interfaces::srv::MoveToNamedPose_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<example_interfaces::srv::MoveToNamedPose_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<example_interfaces::srv::MoveToNamedPose>()
{
  return "example_interfaces::srv::MoveToNamedPose";
}

template<>
inline const char * name<example_interfaces::srv::MoveToNamedPose>()
{
  return "example_interfaces/srv/MoveToNamedPose";
}

template<>
struct has_fixed_size<example_interfaces::srv::MoveToNamedPose>
  : std::integral_constant<
    bool,
    has_fixed_size<example_interfaces::srv::MoveToNamedPose_Request>::value &&
    has_fixed_size<example_interfaces::srv::MoveToNamedPose_Response>::value
  >
{
};

template<>
struct has_bounded_size<example_interfaces::srv::MoveToNamedPose>
  : std::integral_constant<
    bool,
    has_bounded_size<example_interfaces::srv::MoveToNamedPose_Request>::value &&
    has_bounded_size<example_interfaces::srv::MoveToNamedPose_Response>::value
  >
{
};

template<>
struct is_service<example_interfaces::srv::MoveToNamedPose>
  : std::true_type
{
};

template<>
struct is_service_request<example_interfaces::srv::MoveToNamedPose_Request>
  : std::true_type
{
};

template<>
struct is_service_response<example_interfaces::srv::MoveToNamedPose_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__TRAITS_HPP_
