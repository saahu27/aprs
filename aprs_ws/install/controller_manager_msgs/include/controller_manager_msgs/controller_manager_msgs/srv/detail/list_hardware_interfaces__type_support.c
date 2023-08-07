// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from controller_manager_msgs:srv/ListHardwareInterfaces.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"
#include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__functions.h"
#include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__init(message_memory);
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListHardwareInterfaces_Request",  // message name
  1,  // number of fields
  sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Request),
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_member_array,  // message members
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_members,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_hash,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_description,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Request)() {
  if (!controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.h"


// Include directives for member types
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/hardware_interface.h"
// Member `command_interfaces`
// Member `state_interfaces`
#include "controller_manager_msgs/msg/detail/hardware_interface__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__init(message_memory);
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__fini(message_memory);
}

size_t controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__command_interfaces(
  const void * untyped_member)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__command_interfaces(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__command_interfaces(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__command_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__msg__HardwareInterface * item =
    ((const controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__command_interfaces(untyped_member, index));
  controller_manager_msgs__msg__HardwareInterface * value =
    (controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__command_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__msg__HardwareInterface * item =
    ((controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__command_interfaces(untyped_member, index));
  const controller_manager_msgs__msg__HardwareInterface * value =
    (const controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__command_interfaces(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(member);
  return controller_manager_msgs__msg__HardwareInterface__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__state_interfaces(
  const void * untyped_member)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__state_interfaces(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (const controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__state_interfaces(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__state_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__msg__HardwareInterface * item =
    ((const controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__state_interfaces(untyped_member, index));
  controller_manager_msgs__msg__HardwareInterface * value =
    (controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__state_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__msg__HardwareInterface * item =
    ((controller_manager_msgs__msg__HardwareInterface *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__state_interfaces(untyped_member, index));
  const controller_manager_msgs__msg__HardwareInterface * value =
    (const controller_manager_msgs__msg__HardwareInterface *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__state_interfaces(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__msg__HardwareInterface__Sequence * member =
    (controller_manager_msgs__msg__HardwareInterface__Sequence *)(untyped_member);
  controller_manager_msgs__msg__HardwareInterface__Sequence__fini(member);
  return controller_manager_msgs__msg__HardwareInterface__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array[2] = {
  {
    "command_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Response, command_interfaces),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__command_interfaces,  // size() function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__command_interfaces,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__command_interfaces,  // get(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__command_interfaces,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__command_interfaces,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__command_interfaces  // resize(index) function pointer
  },
  {
    "state_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Response, state_interfaces),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Response__state_interfaces,  // size() function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Response__state_interfaces,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Response__state_interfaces,  // get(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Response__state_interfaces,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Response__state_interfaces,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Response__state_interfaces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListHardwareInterfaces_Response",  // message name
  2,  // number of fields
  sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Response),
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array,  // message members
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_members,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_hash,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_description,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Response)() {
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareInterface)();
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, msg, HardwareInterface)();
  if (!controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__functions.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "controller_manager_msgs/srv/list_hardware_interfaces.h"
// Member `request`
// Member `response`
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__init(message_memory);
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_fini_function(void * message_memory)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__fini(message_memory);
}

size_t controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Event__request(
  const void * untyped_member)
{
  const controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * member =
    (const controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Event__request(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * member =
    (const controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Event__request(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * member =
    (controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__srv__ListHardwareInterfaces_Request * item =
    ((const controller_manager_msgs__srv__ListHardwareInterfaces_Request *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Event__request(untyped_member, index));
  controller_manager_msgs__srv__ListHardwareInterfaces_Request * value =
    (controller_manager_msgs__srv__ListHardwareInterfaces_Request *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request * item =
    ((controller_manager_msgs__srv__ListHardwareInterfaces_Request *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Event__request(untyped_member, index));
  const controller_manager_msgs__srv__ListHardwareInterfaces_Request * value =
    (const controller_manager_msgs__srv__ListHardwareInterfaces_Request *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Event__request(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence * member =
    (controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence *)(untyped_member);
  controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__fini(member);
  return controller_manager_msgs__srv__ListHardwareInterfaces_Request__Sequence__init(member, size);
}

size_t controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Event__response(
  const void * untyped_member)
{
  const controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * member =
    (const controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Event__response(
  const void * untyped_member, size_t index)
{
  const controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * member =
    (const controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Event__response(
  void * untyped_member, size_t index)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * member =
    (controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const controller_manager_msgs__srv__ListHardwareInterfaces_Response * item =
    ((const controller_manager_msgs__srv__ListHardwareInterfaces_Response *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Event__response(untyped_member, index));
  controller_manager_msgs__srv__ListHardwareInterfaces_Response * value =
    (controller_manager_msgs__srv__ListHardwareInterfaces_Response *)(untyped_value);
  *value = *item;
}

void controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response * item =
    ((controller_manager_msgs__srv__ListHardwareInterfaces_Response *)
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Event__response(untyped_member, index));
  const controller_manager_msgs__srv__ListHardwareInterfaces_Response * value =
    (const controller_manager_msgs__srv__ListHardwareInterfaces_Response *)(untyped_value);
  *item = *value;
}

bool controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Event__response(
  void * untyped_member, size_t size)
{
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence * member =
    (controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence *)(untyped_member);
  controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__fini(member);
  return controller_manager_msgs__srv__ListHardwareInterfaces_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Event, info),  // bytes offset in struct
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
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Event, request),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Event__request,  // size() function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Event__request,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Event__request,  // get(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Event__request,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Event__request,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(controller_manager_msgs__srv__ListHardwareInterfaces_Event, response),  // bytes offset in struct
    NULL,  // default value
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__size_function__ListHardwareInterfaces_Event__response,  // size() function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_const_function__ListHardwareInterfaces_Event__response,  // get_const(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__get_function__ListHardwareInterfaces_Event__response,  // get(index) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__fetch_function__ListHardwareInterfaces_Event__response,  // fetch(index, &value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__assign_function__ListHardwareInterfaces_Event__response,  // assign(index, value) function pointer
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__resize_function__ListHardwareInterfaces_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_members = {
  "controller_manager_msgs__srv",  // message namespace
  "ListHardwareInterfaces_Event",  // message name
  3,  // number of fields
  sizeof(controller_manager_msgs__srv__ListHardwareInterfaces_Event),
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_member_array,  // message members
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_type_support_handle = {
  0,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_members,
  get_message_typesupport_handle_function,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_type_hash,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_type_description,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Event)() {
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Request)();
  controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Response)();
  if (!controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "controller_manager_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "controller_manager_msgs/srv/detail/list_hardware_interfaces__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_members = {
  "controller_manager_msgs__srv",  // service namespace
  "ListHardwareInterfaces",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle,
  NULL,  // response message
  // controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle
  NULL  // event_message
  // controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle
};


static rosidl_service_type_support_t controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle = {
  0,
  &controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_members,
  get_service_typesupport_handle_function,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Request__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Request_message_type_support_handle,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Response__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Response_message_type_support_handle,
  &controller_manager_msgs__srv__ListHardwareInterfaces_Event__rosidl_typesupport_introspection_c__ListHardwareInterfaces_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    controller_manager_msgs,
    srv,
    ListHardwareInterfaces
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    controller_manager_msgs,
    srv,
    ListHardwareInterfaces
  ),
  &controller_manager_msgs__srv__ListHardwareInterfaces__get_type_hash,
  &controller_manager_msgs__srv__ListHardwareInterfaces__get_type_description,
  &controller_manager_msgs__srv__ListHardwareInterfaces__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_controller_manager_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces)() {
  if (!controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle.typesupport_identifier) {
    controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, controller_manager_msgs, srv, ListHardwareInterfaces_Event)()->data;
  }

  return &controller_manager_msgs__srv__detail__list_hardware_interfaces__rosidl_typesupport_introspection_c__ListHardwareInterfaces_service_type_support_handle;
}
