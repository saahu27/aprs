// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_msgs:srv/SetPayload.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_msgs/srv/set_payload.hpp"


#ifndef UR_MSGS__SRV__DETAIL__SET_PAYLOAD__BUILDER_HPP_
#define UR_MSGS__SRV__DETAIL__SET_PAYLOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_msgs/srv/detail/set_payload__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPayload_Request_center_of_gravity
{
public:
  explicit Init_SetPayload_Request_center_of_gravity(::ur_msgs::srv::SetPayload_Request & msg)
  : msg_(msg)
  {}
  ::ur_msgs::srv::SetPayload_Request center_of_gravity(::ur_msgs::srv::SetPayload_Request::_center_of_gravity_type arg)
  {
    msg_.center_of_gravity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetPayload_Request msg_;
};

class Init_SetPayload_Request_mass
{
public:
  Init_SetPayload_Request_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPayload_Request_center_of_gravity mass(::ur_msgs::srv::SetPayload_Request::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_SetPayload_Request_center_of_gravity(msg_);
  }

private:
  ::ur_msgs::srv::SetPayload_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetPayload_Request>()
{
  return ur_msgs::srv::builder::Init_SetPayload_Request_mass();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPayload_Response_success
{
public:
  Init_SetPayload_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_msgs::srv::SetPayload_Response success(::ur_msgs::srv::SetPayload_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetPayload_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetPayload_Response>()
{
  return ur_msgs::srv::builder::Init_SetPayload_Response_success();
}

}  // namespace ur_msgs


namespace ur_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPayload_Event_response
{
public:
  explicit Init_SetPayload_Event_response(::ur_msgs::srv::SetPayload_Event & msg)
  : msg_(msg)
  {}
  ::ur_msgs::srv::SetPayload_Event response(::ur_msgs::srv::SetPayload_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_msgs::srv::SetPayload_Event msg_;
};

class Init_SetPayload_Event_request
{
public:
  explicit Init_SetPayload_Event_request(::ur_msgs::srv::SetPayload_Event & msg)
  : msg_(msg)
  {}
  Init_SetPayload_Event_response request(::ur_msgs::srv::SetPayload_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetPayload_Event_response(msg_);
  }

private:
  ::ur_msgs::srv::SetPayload_Event msg_;
};

class Init_SetPayload_Event_info
{
public:
  Init_SetPayload_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPayload_Event_request info(::ur_msgs::srv::SetPayload_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetPayload_Event_request(msg_);
  }

private:
  ::ur_msgs::srv::SetPayload_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_msgs::srv::SetPayload_Event>()
{
  return ur_msgs::srv::builder::Init_SetPayload_Event_info();
}

}  // namespace ur_msgs

#endif  // UR_MSGS__SRV__DETAIL__SET_PAYLOAD__BUILDER_HPP_
