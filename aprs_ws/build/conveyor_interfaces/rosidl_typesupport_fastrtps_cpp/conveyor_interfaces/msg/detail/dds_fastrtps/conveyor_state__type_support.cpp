// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice
#include "conveyor_interfaces/msg/detail/conveyor_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "conveyor_interfaces/msg/detail/conveyor_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace conveyor_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conveyor_interfaces
cdr_serialize(
  const conveyor_interfaces::msg::ConveyorState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: enabled
  cdr << (ros_message.enabled ? true : false);
  // Member: speed
  cdr << ros_message.speed;
  // Member: direction
  cdr << ros_message.direction;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conveyor_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  conveyor_interfaces::msg::ConveyorState & ros_message)
{
  // Member: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled = tmp ? true : false;
  }

  // Member: speed
  cdr >> ros_message.speed;

  // Member: direction
  cdr >> ros_message.direction;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conveyor_interfaces
get_serialized_size(
  const conveyor_interfaces::msg::ConveyorState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_conveyor_interfaces
max_serialized_size_ConveyorState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ConveyorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const conveyor_interfaces::msg::ConveyorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConveyorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<conveyor_interfaces::msg::ConveyorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConveyorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const conveyor_interfaces::msg::ConveyorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConveyorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ConveyorState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ConveyorState__callbacks = {
  "conveyor_interfaces::msg",
  "ConveyorState",
  _ConveyorState__cdr_serialize,
  _ConveyorState__cdr_deserialize,
  _ConveyorState__get_serialized_size,
  _ConveyorState__max_serialized_size
};

static rosidl_message_type_support_t _ConveyorState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConveyorState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace conveyor_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_conveyor_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<conveyor_interfaces::msg::ConveyorState>()
{
  return &conveyor_interfaces::msg::typesupport_fastrtps_cpp::_ConveyorState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, conveyor_interfaces, msg, ConveyorState)() {
  return &conveyor_interfaces::msg::typesupport_fastrtps_cpp::_ConveyorState__handle;
}

#ifdef __cplusplus
}
#endif
