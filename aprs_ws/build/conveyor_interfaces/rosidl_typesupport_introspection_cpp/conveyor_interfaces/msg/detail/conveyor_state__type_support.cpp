// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "conveyor_interfaces/msg/detail/conveyor_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace conveyor_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ConveyorState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) conveyor_interfaces::msg::ConveyorState(_init);
}

void ConveyorState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<conveyor_interfaces::msg::ConveyorState *>(message_memory);
  typed_message->~ConveyorState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConveyorState_message_member_array[3] = {
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces::msg::ConveyorState, enabled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces::msg::ConveyorState, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces::msg::ConveyorState, direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConveyorState_message_members = {
  "conveyor_interfaces::msg",  // message namespace
  "ConveyorState",  // message name
  3,  // number of fields
  sizeof(conveyor_interfaces::msg::ConveyorState),
  ConveyorState_message_member_array,  // message members
  ConveyorState_init_function,  // function to initialize message memory (memory has to be allocated)
  ConveyorState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConveyorState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConveyorState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace conveyor_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<conveyor_interfaces::msg::ConveyorState>()
{
  return &::conveyor_interfaces::msg::rosidl_typesupport_introspection_cpp::ConveyorState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, conveyor_interfaces, msg, ConveyorState)() {
  return &::conveyor_interfaces::msg::rosidl_typesupport_introspection_cpp::ConveyorState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
