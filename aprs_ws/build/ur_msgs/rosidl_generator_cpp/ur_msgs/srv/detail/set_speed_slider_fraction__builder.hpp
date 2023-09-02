// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/set_speed_slider_fraction.hpp"


#ifndef UR_MSGS__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__BUILDER_HPP_
#define UR_MSGS__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeedSliderFraction_Request_speed_slider_fraction
{
public:
  Init_SetSpeedSliderFraction_Request_speed_slider_fraction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::srv::SetSpeedSliderFraction_Request speed_slider_fraction(::ur_msgs::srv::SetSpeedSliderFraction_Request::_speed_slider_fraction_type arg)
  {
    msg_.speed_slider_fraction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetSpeedSliderFraction_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetSpeedSliderFraction_Request>()
{
  return ur_msgs::srv::builder::Init_SetSpeedSliderFraction_Request_speed_slider_fraction();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeedSliderFraction_Response_success
{
public:
  Init_SetSpeedSliderFraction_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::srv::SetSpeedSliderFraction_Response success(::ur_msgs::srv::SetSpeedSliderFraction_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetSpeedSliderFraction_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetSpeedSliderFraction_Response>()
{
  return ur_msgs::srv::builder::Init_SetSpeedSliderFraction_Response_success();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetSpeedSliderFraction_Event_response
{
public:
  explicit Init_SetSpeedSliderFraction_Event_response(::ur_msgs::srv::SetSpeedSliderFraction_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::srv::SetSpeedSliderFraction_Event response(::ur_msgs::srv::SetSpeedSliderFraction_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetSpeedSliderFraction_Event msg_;
};

class Init_SetSpeedSliderFraction_Event_request
{
public:
  explicit Init_SetSpeedSliderFraction_Event_request(::ur_msgs::srv::SetSpeedSliderFraction_Event & msg)
  : msg_(msg)
  {}
  Init_SetSpeedSliderFraction_Event_response request(::ur_msgs::srv::SetSpeedSliderFraction_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetSpeedSliderFraction_Event_response(msg_);
  }

private:
  ::ur_msgs::srv::SetSpeedSliderFraction_Event msg_;
};

class Init_SetSpeedSliderFraction_Event_info
{
public:
  Init_SetSpeedSliderFraction_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSpeedSliderFraction_Event_request info(::ur_msgs::srv::SetSpeedSliderFraction_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetSpeedSliderFraction_Event_request(msg_);
  }

private:
  ::ur_msgs::srv::SetSpeedSliderFraction_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetSpeedSliderFraction_Event>()
{
  return ur_msgs::srv::builder::Init_SetSpeedSliderFraction_Event_info();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__SRV__DETAIL__SET_SPEED_SLIDER_FRACTION__BUILDER_HPP_
