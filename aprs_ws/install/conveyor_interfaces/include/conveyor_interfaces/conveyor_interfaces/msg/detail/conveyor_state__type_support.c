// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "conveyor_interfaces/msg/detail/conveyor_state__rosidl_typesupport_introspection_c.h"
#include "conveyor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "conveyor_interfaces/msg/detail/conveyor_state__functions.h"
#include "conveyor_interfaces/msg/detail/conveyor_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  conveyor_interfaces__msg__ConveyorState__init(message_memory);
}

void conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_fini_function(void * message_memory)
{
  conveyor_interfaces__msg__ConveyorState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_member_array[3] = {
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces__msg__ConveyorState, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces__msg__ConveyorState, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces__msg__ConveyorState, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_members = {
  "conveyor_interfaces__msg",  // message namespace
  "ConveyorState",  // message name
  3,  // number of fields
  sizeof(conveyor_interfaces__msg__ConveyorState),
  conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_member_array,  // message members
  conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_init_function,  // function to initialize message memory (memory has to be allocated)
  conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_type_support_handle = {
  0,
  &conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conveyor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, msg, ConveyorState)() {
  if (!conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_type_support_handle.typesupport_identifier) {
    conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &conveyor_interfaces__msg__ConveyorState__rosidl_typesupport_introspection_c__ConveyorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
