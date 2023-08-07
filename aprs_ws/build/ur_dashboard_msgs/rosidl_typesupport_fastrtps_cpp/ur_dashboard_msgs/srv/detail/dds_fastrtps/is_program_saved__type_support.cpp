// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ur_dashboard_msgs:srv/IsProgramSaved.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/srv/detail/is_program_saved__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ur_dashboard_msgs/srv/detail/is_program_saved__functions.h"
#include "ur_dashboard_msgs/srv/detail/is_program_saved__struct.hpp"

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

namespace ur_dashboard_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_serialize(
  const ur_dashboard_msgs::srv::IsProgramSaved_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_dashboard_msgs::srv::IsProgramSaved_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
get_serialized_size(
  const ur_dashboard_msgs::srv::IsProgramSaved_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
max_serialized_size_IsProgramSaved_Request(
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


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _IsProgramSaved_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::IsProgramSaved_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IsProgramSaved_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_dashboard_msgs::srv::IsProgramSaved_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IsProgramSaved_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::IsProgramSaved_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IsProgramSaved_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IsProgramSaved_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IsProgramSaved_Request__callbacks = {
  "ur_dashboard_msgs::srv",
  "IsProgramSaved_Request",
  _IsProgramSaved_Request__cdr_serialize,
  _IsProgramSaved_Request__cdr_deserialize,
  _IsProgramSaved_Request__get_serialized_size,
  _IsProgramSaved_Request__max_serialized_size
};

static rosidl_message_type_support_t _IsProgramSaved_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IsProgramSaved_Request__callbacks,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__IsProgramSaved_Request__get_type_hash,
  &ur_dashboard_msgs__srv__IsProgramSaved_Request__get_type_description,
  &ur_dashboard_msgs__srv__IsProgramSaved_Request__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::IsProgramSaved_Request>()
{
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, IsProgramSaved_Request)() {
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ur_dashboard_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_serialize(
  const ur_dashboard_msgs::srv::IsProgramSaved_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: answer
  cdr << ros_message.answer;
  // Member: program_name
  cdr << ros_message.program_name;
  // Member: program_saved
  cdr << (ros_message.program_saved ? true : false);
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_dashboard_msgs::srv::IsProgramSaved_Response & ros_message)
{
  // Member: answer
  cdr >> ros_message.answer;

  // Member: program_name
  cdr >> ros_message.program_name;

  // Member: program_saved
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.program_saved = tmp ? true : false;
  }

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
get_serialized_size(
  const ur_dashboard_msgs::srv::IsProgramSaved_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: answer
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.answer.size() + 1);
  // Member: program_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.program_name.size() + 1);
  // Member: program_saved
  {
    size_t item_size = sizeof(ros_message.program_saved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
max_serialized_size_IsProgramSaved_Response(
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


  // Member: answer
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: program_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: program_saved
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _IsProgramSaved_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::IsProgramSaved_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IsProgramSaved_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_dashboard_msgs::srv::IsProgramSaved_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IsProgramSaved_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::IsProgramSaved_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IsProgramSaved_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IsProgramSaved_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IsProgramSaved_Response__callbacks = {
  "ur_dashboard_msgs::srv",
  "IsProgramSaved_Response",
  _IsProgramSaved_Response__cdr_serialize,
  _IsProgramSaved_Response__cdr_deserialize,
  _IsProgramSaved_Response__get_serialized_size,
  _IsProgramSaved_Response__max_serialized_size
};

static rosidl_message_type_support_t _IsProgramSaved_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IsProgramSaved_Response__callbacks,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__IsProgramSaved_Response__get_type_hash,
  &ur_dashboard_msgs__srv__IsProgramSaved_Response__get_type_description,
  &ur_dashboard_msgs__srv__IsProgramSaved_Response__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::IsProgramSaved_Response>()
{
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, IsProgramSaved_Response)() {
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace service_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const service_msgs::msg::ServiceEventInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  service_msgs::msg::ServiceEventInfo &);
size_t get_serialized_size(
  const service_msgs::msg::ServiceEventInfo &,
  size_t current_alignment);
size_t
max_serialized_size_ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace service_msgs

// functions for ur_dashboard_msgs::srv::IsProgramSaved_Request already declared above

// functions for ur_dashboard_msgs::srv::IsProgramSaved_Response already declared above


namespace ur_dashboard_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_serialize(
  const ur_dashboard_msgs::srv::IsProgramSaved_Event & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.info,
    cdr);
  // Member: request
  {
    size_t size = ros_message.request.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.request[i],
        cdr);
    }
  }
  // Member: response
  {
    size_t size = ros_message.response.size();
    if (size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.response[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ur_dashboard_msgs::srv::IsProgramSaved_Event & ros_message)
{
  // Member: info
  service_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.info);

  // Member: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.request.resize(size);
    for (size_t i = 0; i < size; i++) {
      ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.request[i]);
    }
  }

  // Member: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.response.resize(size);
    for (size_t i = 0; i < size; i++) {
      ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.response[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
get_serialized_size(
  const ur_dashboard_msgs::srv::IsProgramSaved_Event & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: info

  current_alignment +=
    service_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.info, current_alignment);
  // Member: request
  {
    size_t array_size = ros_message.request.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.request[index], current_alignment);
    }
  }
  // Member: response
  {
    size_t array_size = ros_message.response.size();
    if (array_size > 1) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.response[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ur_dashboard_msgs
max_serialized_size_IsProgramSaved_Event(
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


  // Member: info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        service_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::max_serialized_size_IsProgramSaved_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::max_serialized_size_IsProgramSaved_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _IsProgramSaved_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::IsProgramSaved_Event *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IsProgramSaved_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ur_dashboard_msgs::srv::IsProgramSaved_Event *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IsProgramSaved_Event__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ur_dashboard_msgs::srv::IsProgramSaved_Event *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IsProgramSaved_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IsProgramSaved_Event(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IsProgramSaved_Event__callbacks = {
  "ur_dashboard_msgs::srv",
  "IsProgramSaved_Event",
  _IsProgramSaved_Event__cdr_serialize,
  _IsProgramSaved_Event__cdr_deserialize,
  _IsProgramSaved_Event__get_serialized_size,
  _IsProgramSaved_Event__max_serialized_size
};

static rosidl_message_type_support_t _IsProgramSaved_Event__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IsProgramSaved_Event__callbacks,
  get_message_typesupport_handle_function,
  &ur_dashboard_msgs__srv__IsProgramSaved_Event__get_type_hash,
  &ur_dashboard_msgs__srv__IsProgramSaved_Event__get_type_description,
  &ur_dashboard_msgs__srv__IsProgramSaved_Event__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_dashboard_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_dashboard_msgs::srv::IsProgramSaved_Event>()
{
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved_Event__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, IsProgramSaved_Event)() {
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved_Event__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ur_dashboard_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _IsProgramSaved__callbacks = {
  "ur_dashboard_msgs::srv",
  "IsProgramSaved",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, IsProgramSaved_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, IsProgramSaved_Response)(),
};

#ifdef __cplusplus
extern "C"
{
#endif

static const rosidl_service_type_support_t _IsProgramSaved__handle{
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IsProgramSaved__callbacks,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::IsProgramSaved_Request>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::IsProgramSaved_Response>(),
  ::rosidl_typesupport_fastrtps_cpp::get_message_type_support_handle<ur_dashboard_msgs::srv::IsProgramSaved_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur_dashboard_msgs::srv::IsProgramSaved>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur_dashboard_msgs::srv::IsProgramSaved>,
  &ur_dashboard_msgs__srv__IsProgramSaved__get_type_hash,
  &ur_dashboard_msgs__srv__IsProgramSaved__get_type_description,
  &ur_dashboard_msgs__srv__IsProgramSaved__get_type_description_sources,
};

#ifdef __cplusplus
}
#endif

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ur_dashboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ur_dashboard_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<ur_dashboard_msgs::srv::IsProgramSaved>()
{
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur_dashboard_msgs, srv, IsProgramSaved)() {
  return &ur_dashboard_msgs::srv::typesupport_fastrtps_cpp::_IsProgramSaved__handle;
}

#ifdef __cplusplus
}
#endif
