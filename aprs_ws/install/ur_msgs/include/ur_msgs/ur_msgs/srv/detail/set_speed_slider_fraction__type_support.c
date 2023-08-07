// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_msgs:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"
#include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
#include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetSpeedSliderFraction_Request__init(message_memory);
}

void ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_fini_function(void * message_memory)
{
  ur_msgs__srv__SetSpeedSliderFraction_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_member_array[1] = {
  {
    "speed_slider_fraction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetSpeedSliderFraction_Request, speed_slider_fraction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetSpeedSliderFraction_Request",  // message name
  1,  // number of fields
  sizeof(ur_msgs__srv__SetSpeedSliderFraction_Request),
  ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_member_array,  // message members
  ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle = {
  0,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_hash,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Request)() {
  if (!ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetSpeedSliderFraction_Response__init(message_memory);
}

void ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_fini_function(void * message_memory)
{
  ur_msgs__srv__SetSpeedSliderFraction_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetSpeedSliderFraction_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetSpeedSliderFraction_Response",  // message name
  1,  // number of fields
  sizeof(ur_msgs__srv__SetSpeedSliderFraction_Response),
  ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_member_array,  // message members
  ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle = {
  0,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_hash,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Response)() {
  if (!ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ur_msgs/srv/set_speed_slider_fraction.h"
// Member `request`
// Member `response`
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_msgs__srv__SetSpeedSliderFraction_Event__init(message_memory);
}

void ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_fini_function(void * message_memory)
{
  ur_msgs__srv__SetSpeedSliderFraction_Event__fini(message_memory);
}

size_t ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__size_function__SetSpeedSliderFraction_Event__request(
  const void * untyped_member)
{
  const ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence * member =
    (const ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_const_function__SetSpeedSliderFraction_Event__request(
  const void * untyped_member, size_t index)
{
  const ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence * member =
    (const ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_function__SetSpeedSliderFraction_Event__request(
  void * untyped_member, size_t index)
{
  ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence * member =
    (ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__fetch_function__SetSpeedSliderFraction_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__srv__SetSpeedSliderFraction_Request * item =
    ((const ur_msgs__srv__SetSpeedSliderFraction_Request *)
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_const_function__SetSpeedSliderFraction_Event__request(untyped_member, index));
  ur_msgs__srv__SetSpeedSliderFraction_Request * value =
    (ur_msgs__srv__SetSpeedSliderFraction_Request *)(untyped_value);
  *value = *item;
}

void ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__assign_function__SetSpeedSliderFraction_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__srv__SetSpeedSliderFraction_Request * item =
    ((ur_msgs__srv__SetSpeedSliderFraction_Request *)
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_function__SetSpeedSliderFraction_Event__request(untyped_member, index));
  const ur_msgs__srv__SetSpeedSliderFraction_Request * value =
    (const ur_msgs__srv__SetSpeedSliderFraction_Request *)(untyped_value);
  *item = *value;
}

bool ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__resize_function__SetSpeedSliderFraction_Event__request(
  void * untyped_member, size_t size)
{
  ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence * member =
    (ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence *)(untyped_member);
  ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__fini(member);
  return ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__init(member, size);
}

size_t ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__size_function__SetSpeedSliderFraction_Event__response(
  const void * untyped_member)
{
  const ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence * member =
    (const ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_const_function__SetSpeedSliderFraction_Event__response(
  const void * untyped_member, size_t index)
{
  const ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence * member =
    (const ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_function__SetSpeedSliderFraction_Event__response(
  void * untyped_member, size_t index)
{
  ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence * member =
    (ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__fetch_function__SetSpeedSliderFraction_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur_msgs__srv__SetSpeedSliderFraction_Response * item =
    ((const ur_msgs__srv__SetSpeedSliderFraction_Response *)
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_const_function__SetSpeedSliderFraction_Event__response(untyped_member, index));
  ur_msgs__srv__SetSpeedSliderFraction_Response * value =
    (ur_msgs__srv__SetSpeedSliderFraction_Response *)(untyped_value);
  *value = *item;
}

void ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__assign_function__SetSpeedSliderFraction_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur_msgs__srv__SetSpeedSliderFraction_Response * item =
    ((ur_msgs__srv__SetSpeedSliderFraction_Response *)
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_function__SetSpeedSliderFraction_Event__response(untyped_member, index));
  const ur_msgs__srv__SetSpeedSliderFraction_Response * value =
    (const ur_msgs__srv__SetSpeedSliderFraction_Response *)(untyped_value);
  *item = *value;
}

bool ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__resize_function__SetSpeedSliderFraction_Event__response(
  void * untyped_member, size_t size)
{
  ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence * member =
    (ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence *)(untyped_member);
  ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__fini(member);
  return ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_msgs__srv__SetSpeedSliderFraction_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur_msgs__srv__SetSpeedSliderFraction_Event, request),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__size_function__SetSpeedSliderFraction_Event__request,  // size() function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_const_function__SetSpeedSliderFraction_Event__request,  // get_const(index) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_function__SetSpeedSliderFraction_Event__request,  // get(index) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__fetch_function__SetSpeedSliderFraction_Event__request,  // fetch(index, &value) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__assign_function__SetSpeedSliderFraction_Event__request,  // assign(index, value) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__resize_function__SetSpeedSliderFraction_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur_msgs__srv__SetSpeedSliderFraction_Event, response),  // bytes offset in struct
    NULL,  // default value
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__size_function__SetSpeedSliderFraction_Event__response,  // size() function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_const_function__SetSpeedSliderFraction_Event__response,  // get_const(index) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__get_function__SetSpeedSliderFraction_Event__response,  // get(index) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__fetch_function__SetSpeedSliderFraction_Event__response,  // fetch(index, &value) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__assign_function__SetSpeedSliderFraction_Event__response,  // assign(index, value) function pointer
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__resize_function__SetSpeedSliderFraction_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_members = {
  "ur_msgs__srv",  // message namespace
  "SetSpeedSliderFraction_Event",  // message name
  3,  // number of fields
  sizeof(ur_msgs__srv__SetSpeedSliderFraction_Event),
  ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_member_array,  // message members
  ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_type_support_handle = {
  0,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_members,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_hash,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_description,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Event)() {
  ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Request)();
  ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Response)();
  if (!ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_members = {
  "ur_msgs__srv",  // service namespace
  "SetSpeedSliderFraction",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle,
  NULL,  // response message
  // ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle
  NULL  // event_message
  // ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle
};


static rosidl_service_type_support_t ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle = {
  0,
  &ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_members,
  get_service_typesupport_handle_function,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Request_message_type_support_handle,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Response_message_type_support_handle,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    srv,
    SetSpeedSliderFraction
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur_msgs,
    srv,
    SetSpeedSliderFraction
  ),
  &ur_msgs__srv__SetSpeedSliderFraction__get_type_hash,
  &ur_msgs__srv__SetSpeedSliderFraction__get_type_description,
  &ur_msgs__srv__SetSpeedSliderFraction__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction)() {
  if (!ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle.typesupport_identifier) {
    ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_msgs, srv, SetSpeedSliderFraction_Event)()->data;
  }

  return &ur_msgs__srv__detail__set_speed_slider_fraction__rosidl_typesupport_introspection_c__SetSpeedSliderFraction_service_type_support_handle;
}
