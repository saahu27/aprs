// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur_dashboard_msgs:srv/GetLoadedProgram.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_dashboard_msgs/srv/detail/get_loaded_program__functions.h"
#include "ur_dashboard_msgs/srv/detail/get_loaded_program__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetLoadedProgram_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_dashboard_msgs::srv::GetLoadedProgram_Request(_init);
}

void GetLoadedProgram_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_dashboard_msgs::srv::GetLoadedProgram_Request *>(message_memory);
  typed_message->~GetLoadedProgram_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetLoadedProgram_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs::srv::GetLoadedProgram_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetLoadedProgram_Request_message_members = {
  "ur_dashboard_msgs::srv",  // message namespace
  "GetLoadedProgram_Request",  // message name
  1,  // number of fields
  sizeof(ur_dashboard_msgs::srv::GetLoadedProgram_Request),
  GetLoadedProgram_Request_message_member_array,  // message members
  GetLoadedProgram_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetLoadedProgram_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetLoadedProgram_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetLoadedProgram_Request_message_members,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Request__get_type_hash,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Request__get_type_description,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Request>()
{
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_introspection_cpp::GetLoadedProgram_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, GetLoadedProgram_Request)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_introspection_cpp::GetLoadedProgram_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_loaded_program__functions.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_loaded_program__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetLoadedProgram_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_dashboard_msgs::srv::GetLoadedProgram_Response(_init);
}

void GetLoadedProgram_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_dashboard_msgs::srv::GetLoadedProgram_Response *>(message_memory);
  typed_message->~GetLoadedProgram_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetLoadedProgram_Response_message_member_array[3] = {
  {
    "answer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs::srv::GetLoadedProgram_Response, answer),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "program_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs::srv::GetLoadedProgram_Response, program_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs::srv::GetLoadedProgram_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetLoadedProgram_Response_message_members = {
  "ur_dashboard_msgs::srv",  // message namespace
  "GetLoadedProgram_Response",  // message name
  3,  // number of fields
  sizeof(ur_dashboard_msgs::srv::GetLoadedProgram_Response),
  GetLoadedProgram_Response_message_member_array,  // message members
  GetLoadedProgram_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetLoadedProgram_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetLoadedProgram_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetLoadedProgram_Response_message_members,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Response__get_type_hash,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Response__get_type_description,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Response>()
{
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_introspection_cpp::GetLoadedProgram_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, GetLoadedProgram_Response)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_introspection_cpp::GetLoadedProgram_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_loaded_program__functions.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_loaded_program__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetLoadedProgram_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_dashboard_msgs::srv::GetLoadedProgram_Event(_init);
}

void GetLoadedProgram_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_dashboard_msgs::srv::GetLoadedProgram_Event *>(message_memory);
  typed_message->~GetLoadedProgram_Event();
}

size_t size_function__GetLoadedProgram_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetLoadedProgram_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetLoadedProgram_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetLoadedProgram_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ur_dashboard_msgs::srv::GetLoadedProgram_Request *>(
    get_const_function__GetLoadedProgram_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<ur_dashboard_msgs::srv::GetLoadedProgram_Request *>(untyped_value);
  value = item;
}

void assign_function__GetLoadedProgram_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ur_dashboard_msgs::srv::GetLoadedProgram_Request *>(
    get_function__GetLoadedProgram_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const ur_dashboard_msgs::srv::GetLoadedProgram_Request *>(untyped_value);
  item = value;
}

void resize_function__GetLoadedProgram_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetLoadedProgram_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetLoadedProgram_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetLoadedProgram_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetLoadedProgram_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ur_dashboard_msgs::srv::GetLoadedProgram_Response *>(
    get_const_function__GetLoadedProgram_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<ur_dashboard_msgs::srv::GetLoadedProgram_Response *>(untyped_value);
  value = item;
}

void assign_function__GetLoadedProgram_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ur_dashboard_msgs::srv::GetLoadedProgram_Response *>(
    get_function__GetLoadedProgram_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const ur_dashboard_msgs::srv::GetLoadedProgram_Response *>(untyped_value);
  item = value;
}

void resize_function__GetLoadedProgram_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ur_dashboard_msgs::srv::GetLoadedProgram_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetLoadedProgram_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_dashboard_msgs::srv::GetLoadedProgram_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Request>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur_dashboard_msgs::srv::GetLoadedProgram_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetLoadedProgram_Event__request,  // size() function pointer
    get_const_function__GetLoadedProgram_Event__request,  // get_const(index) function pointer
    get_function__GetLoadedProgram_Event__request,  // get(index) function pointer
    fetch_function__GetLoadedProgram_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetLoadedProgram_Event__request,  // assign(index, value) function pointer
    resize_function__GetLoadedProgram_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Response>(),  // members of sub message
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur_dashboard_msgs::srv::GetLoadedProgram_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetLoadedProgram_Event__response,  // size() function pointer
    get_const_function__GetLoadedProgram_Event__response,  // get_const(index) function pointer
    get_function__GetLoadedProgram_Event__response,  // get(index) function pointer
    fetch_function__GetLoadedProgram_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetLoadedProgram_Event__response,  // assign(index, value) function pointer
    resize_function__GetLoadedProgram_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetLoadedProgram_Event_message_members = {
  "ur_dashboard_msgs::srv",  // message namespace
  "GetLoadedProgram_Event",  // message name
  3,  // number of fields
  sizeof(ur_dashboard_msgs::srv::GetLoadedProgram_Event),
  GetLoadedProgram_Event_message_member_array,  // message members
  GetLoadedProgram_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetLoadedProgram_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetLoadedProgram_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetLoadedProgram_Event_message_members,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Event__get_type_hash,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Event__get_type_description,
  &ur_dashboard_msgs__srv__GetLoadedProgram_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Event>()
{
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_introspection_cpp::GetLoadedProgram_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, GetLoadedProgram_Event)() {
  return &::ur_dashboard_msgs::srv::rosidl_typesupport_introspection_cpp::GetLoadedProgram_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_loaded_program__functions.h"
// already included above
// #include "ur_dashboard_msgs/srv/detail/get_loaded_program__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetLoadedProgram_service_members = {
  "ur_dashboard_msgs::srv",  // service namespace
  "GetLoadedProgram",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetLoadedProgram_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetLoadedProgram_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur_dashboard_msgs::srv::GetLoadedProgram>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur_dashboard_msgs::srv::GetLoadedProgram>,
  &ur_dashboard_msgs__srv__GetLoadedProgram__get_type_hash,
  &ur_dashboard_msgs__srv__GetLoadedProgram__get_type_description,
  &ur_dashboard_msgs__srv__GetLoadedProgram__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::ur_dashboard_msgs::srv::rosidl_typesupport_introspection_cpp::GetLoadedProgram_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur_dashboard_msgs::srv::GetLoadedProgram_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur_dashboard_msgs::srv::GetLoadedProgram_Response
      >()->data
      );

    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::ur_dashboard_msgs::srv::GetLoadedProgram_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_dashboard_msgs, srv, GetLoadedProgram)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<ur_dashboard_msgs::srv::GetLoadedProgram>();
}

#ifdef __cplusplus
}
#endif
