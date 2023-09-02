// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur_dashboard_msgs:srv/RawRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur_dashboard_msgs/srv/raw_request.hpp"


#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__RAW_REQUEST__BUILDER_HPP_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__RAW_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur_dashboard_msgs/srv/detail/raw_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur_dashboard_msgs
{

namespace srv
{

namespace builder
{

class Init_RawRequest_Request_query
{
public:
  Init_RawRequest_Request_query()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_dashboard_msgs::srv::RawRequest_Request query(::ur_dashboard_msgs::srv::RawRequest_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_dashboard_msgs::srv::RawRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_dashboard_msgs::srv::RawRequest_Request>()
{
  return ur_dashboard_msgs::srv::builder::Init_RawRequest_Request_query();
}

}  // namespace ur_dashboard_msgs


namespace ur_dashboard_msgs
{

namespace srv
{

namespace builder
{

class Init_RawRequest_Response_answer
{
public:
  Init_RawRequest_Response_answer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur_dashboard_msgs::srv::RawRequest_Response answer(::ur_dashboard_msgs::srv::RawRequest_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_dashboard_msgs::srv::RawRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_dashboard_msgs::srv::RawRequest_Response>()
{
  return ur_dashboard_msgs::srv::builder::Init_RawRequest_Response_answer();
}

}  // namespace ur_dashboard_msgs


namespace ur_dashboard_msgs
{

namespace srv
{

namespace builder
{

class Init_RawRequest_Event_response
{
public:
  explicit Init_RawRequest_Event_response(::ur_dashboard_msgs::srv::RawRequest_Event & msg)
  : msg_(msg)
  {}
  ::ur_dashboard_msgs::srv::RawRequest_Event response(::ur_dashboard_msgs::srv::RawRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur_dashboard_msgs::srv::RawRequest_Event msg_;
};

class Init_RawRequest_Event_request
{
public:
  explicit Init_RawRequest_Event_request(::ur_dashboard_msgs::srv::RawRequest_Event & msg)
  : msg_(msg)
  {}
  Init_RawRequest_Event_response request(::ur_dashboard_msgs::srv::RawRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RawRequest_Event_response(msg_);
  }

private:
  ::ur_dashboard_msgs::srv::RawRequest_Event msg_;
};

class Init_RawRequest_Event_info
{
public:
  Init_RawRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawRequest_Event_request info(::ur_dashboard_msgs::srv::RawRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RawRequest_Event_request(msg_);
  }

private:
  ::ur_dashboard_msgs::srv::RawRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur_dashboard_msgs::srv::RawRequest_Event>()
{
  return ur_dashboard_msgs::srv::builder::Init_RawRequest_Event_info();
}

}  // namespace ur_dashboard_msgs

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__RAW_REQUEST__BUILDER_HPP_
