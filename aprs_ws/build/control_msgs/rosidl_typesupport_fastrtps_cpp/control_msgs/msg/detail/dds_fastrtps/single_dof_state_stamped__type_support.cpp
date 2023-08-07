// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from control_msgs:msg/SingleDOFStateStamped.idl
// generated code does not contain a copyright notice
#include "control_msgs/msg/detail/single_dof_state_stamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "control_msgs/msg/detail/single_dof_state_stamped__functions.h"
#include "control_msgs/msg/detail/single_dof_state_stamped__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace control_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const control_msgs::msg::SingleDOFState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  control_msgs::msg::SingleDOFState &);
size_t get_serialized_size(
  const control_msgs::msg::SingleDOFState &,
  size_t current_alignment);
size_t
max_serialized_size_SingleDOFState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace control_msgs


namespace control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
cdr_serialize(
  const control_msgs::msg::SingleDOFStateStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: dof_state
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.dof_state,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  control_msgs::msg::SingleDOFStateStamped & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: dof_state
  control_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.dof_state);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
get_serialized_size(
  const control_msgs::msg::SingleDOFStateStamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: dof_state

  current_alignment +=
    control_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.dof_state, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_control_msgs
max_serialized_size_SingleDOFStateStamped(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: dof_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        control_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SingleDOFState(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SingleDOFStateStamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const control_msgs::msg::SingleDOFStateStamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SingleDOFStateStamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<control_msgs::msg::SingleDOFStateStamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SingleDOFStateStamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const control_msgs::msg::SingleDOFStateStamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SingleDOFStateStamped__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SingleDOFStateStamped(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SingleDOFStateStamped__callbacks = {
  "control_msgs::msg",
  "SingleDOFStateStamped",
  _SingleDOFStateStamped__cdr_serialize,
  _SingleDOFStateStamped__cdr_deserialize,
  _SingleDOFStateStamped__get_serialized_size,
  _SingleDOFStateStamped__max_serialized_size
};

static rosidl_message_type_support_t _SingleDOFStateStamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SingleDOFStateStamped__callbacks,
  get_message_typesupport_handle_function,
  &control_msgs__msg__SingleDOFStateStamped__get_type_hash,
  &control_msgs__msg__SingleDOFStateStamped__get_type_description,
  &control_msgs__msg__SingleDOFStateStamped__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<control_msgs::msg::SingleDOFStateStamped>()
{
  return &control_msgs::msg::typesupport_fastrtps_cpp::_SingleDOFStateStamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, control_msgs, msg, SingleDOFStateStamped)() {
  return &control_msgs::msg::typesupport_fastrtps_cpp::_SingleDOFStateStamped__handle;
}

#ifdef __cplusplus
}
#endif
