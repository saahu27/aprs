// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_msgs:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/set_speed_slider_fraction.hpp"


#ifndef UR_MSGS__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__TRAITS_HPP_
#define UR_MSGS__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeedSliderFraction_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed_slider_fraction
  {
    out << "speed_slider_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_slider_fraction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetSpeedSliderFraction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed_slider_fraction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_slider_fraction: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_slider_fraction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeedSliderFraction_Request & msg, bool use_flow_style = false)
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

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::srv::SetSpeedSliderFraction_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::srv::SetSpeedSliderFraction_Request & msg)
{
  return ur_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::srv::SetSpeedSliderFraction_Request>()
{
  return "ur_msgs::srv::SetSpeedSliderFraction_Request";
}

template<>
inline const char * name<ur_msgs::srv::SetSpeedSliderFraction_Request>()
{
  return "ur_msgs/srv/SetSpeedSliderFraction_Request";
}

template<>
struct has_fixed_size<ur_msgs::srv::SetSpeedSliderFraction_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_msgs::srv::SetSpeedSliderFraction_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeedSliderFraction_Response & msg,
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
  const SetSpeedSliderFraction_Response & msg,
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

inline std::string to_yaml(const SetSpeedSliderFraction_Response & msg, bool use_flow_style = false)
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

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::srv::SetSpeedSliderFraction_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::srv::SetSpeedSliderFraction_Response & msg)
{
  return ur_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::srv::SetSpeedSliderFraction_Response>()
{
  return "ur_msgs::srv::SetSpeedSliderFraction_Response";
}

template<>
inline const char * name<ur_msgs::srv::SetSpeedSliderFraction_Response>()
{
  return "ur_msgs/srv/SetSpeedSliderFraction_Response";
}

template<>
struct has_fixed_size<ur_msgs::srv::SetSpeedSliderFraction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_msgs::srv::SetSpeedSliderFraction_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ur_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetSpeedSliderFraction_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const SetSpeedSliderFraction_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetSpeedSliderFraction_Event & msg, bool use_flow_style = false)
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

}  // namespace ur_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ur_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_msgs::srv::SetSpeedSliderFraction_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur_msgs::srv::SetSpeedSliderFraction_Event & msg)
{
  return ur_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur_msgs::srv::SetSpeedSliderFraction_Event>()
{
  return "ur_msgs::srv::SetSpeedSliderFraction_Event";
}

template<>
inline const char * name<ur_msgs::srv::SetSpeedSliderFraction_Event>()
{
  return "ur_msgs/srv/SetSpeedSliderFraction_Event";
}

template<>
struct has_fixed_size<ur_msgs::srv::SetSpeedSliderFraction_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction_Request>::value && has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction_Response>::value> {};

template<>
struct is_message<ur_msgs::srv::SetSpeedSliderFraction_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_msgs::srv::SetSpeedSliderFraction>()
{
  return "ur_msgs::srv::SetSpeedSliderFraction";
}

template<>
inline const char * name<ur_msgs::srv::SetSpeedSliderFraction>()
{
  return "ur_msgs/srv/SetSpeedSliderFraction";
}

template<>
struct has_fixed_size<ur_msgs::srv::SetSpeedSliderFraction>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_msgs::srv::SetSpeedSliderFraction_Request>::value &&
    has_fixed_size<ur_msgs::srv::SetSpeedSliderFraction_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction_Request>::value &&
    has_bounded_size<ur_msgs::srv::SetSpeedSliderFraction_Response>::value
  >
{
};

template<>
struct is_service<ur_msgs::srv::SetSpeedSliderFraction>
  : std::true_type
{
};

template<>
struct is_service_request<ur_msgs::srv::SetSpeedSliderFraction_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_msgs::srv::SetSpeedSliderFraction_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_MSGS__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__TRAITS_HPP_
