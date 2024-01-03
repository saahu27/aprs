// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from conveyor_interfaces:srv/EnableConveyor.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__TRAITS_HPP_
#define CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "conveyor_interfaces/srv/detail/enable_conveyor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace conveyor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EnableConveyor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnableConveyor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnableConveyor_Request & msg, bool use_flow_style = false)
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

}  // namespace conveyor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use conveyor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const conveyor_interfaces::srv::EnableConveyor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  conveyor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conveyor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const conveyor_interfaces::srv::EnableConveyor_Request & msg)
{
  return conveyor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<conveyor_interfaces::srv::EnableConveyor_Request>()
{
  return "conveyor_interfaces::srv::EnableConveyor_Request";
}

template<>
inline const char * name<conveyor_interfaces::srv::EnableConveyor_Request>()
{
  return "conveyor_interfaces/srv/EnableConveyor_Request";
}

template<>
struct has_fixed_size<conveyor_interfaces::srv::EnableConveyor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<conveyor_interfaces::srv::EnableConveyor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<conveyor_interfaces::srv::EnableConveyor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace conveyor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const EnableConveyor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EnableConveyor_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnableConveyor_Response & msg, bool use_flow_style = false)
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

}  // namespace conveyor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use conveyor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const conveyor_interfaces::srv::EnableConveyor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  conveyor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use conveyor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const conveyor_interfaces::srv::EnableConveyor_Response & msg)
{
  return conveyor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<conveyor_interfaces::srv::EnableConveyor_Response>()
{
  return "conveyor_interfaces::srv::EnableConveyor_Response";
}

template<>
inline const char * name<conveyor_interfaces::srv::EnableConveyor_Response>()
{
  return "conveyor_interfaces/srv/EnableConveyor_Response";
}

template<>
struct has_fixed_size<conveyor_interfaces::srv::EnableConveyor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<conveyor_interfaces::srv::EnableConveyor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<conveyor_interfaces::srv::EnableConveyor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<conveyor_interfaces::srv::EnableConveyor>()
{
  return "conveyor_interfaces::srv::EnableConveyor";
}

template<>
inline const char * name<conveyor_interfaces::srv::EnableConveyor>()
{
  return "conveyor_interfaces/srv/EnableConveyor";
}

template<>
struct has_fixed_size<conveyor_interfaces::srv::EnableConveyor>
  : std::integral_constant<
    bool,
    has_fixed_size<conveyor_interfaces::srv::EnableConveyor_Request>::value &&
    has_fixed_size<conveyor_interfaces::srv::EnableConveyor_Response>::value
  >
{
};

template<>
struct has_bounded_size<conveyor_interfaces::srv::EnableConveyor>
  : std::integral_constant<
    bool,
    has_bounded_size<conveyor_interfaces::srv::EnableConveyor_Request>::value &&
    has_bounded_size<conveyor_interfaces::srv::EnableConveyor_Response>::value
  >
{
};

template<>
struct is_service<conveyor_interfaces::srv::EnableConveyor>
  : std::true_type
{
};

template<>
struct is_service_request<conveyor_interfaces::srv::EnableConveyor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<conveyor_interfaces::srv::EnableConveyor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__TRAITS_HPP_
