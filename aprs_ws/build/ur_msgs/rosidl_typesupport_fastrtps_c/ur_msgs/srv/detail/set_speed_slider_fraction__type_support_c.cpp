// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ur_msgs:srv/SetSpeedSliderFraction.idl
// generated code does not contain a copyright notice
#include "ur_msgs/srv/detail/set_speed_slider_fraction__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ur_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"
#include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetSpeedSliderFraction_Request__ros_msg_type = ur_msgs__srv__SetSpeedSliderFraction_Request;

static bool _SetSpeedSliderFraction_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetSpeedSliderFraction_Request__ros_msg_type * ros_message = static_cast<const _SetSpeedSliderFraction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: speed_slider_fraction
  {
    cdr << ros_message->speed_slider_fraction;
  }

  return true;
}

static bool _SetSpeedSliderFraction_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetSpeedSliderFraction_Request__ros_msg_type * ros_message = static_cast<_SetSpeedSliderFraction_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: speed_slider_fraction
  {
    cdr >> ros_message->speed_slider_fraction;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetSpeedSliderFraction_Request__ros_msg_type * ros_message = static_cast<const _SetSpeedSliderFraction_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name speed_slider_fraction
  {
    size_t item_size = sizeof(ros_message->speed_slider_fraction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetSpeedSliderFraction_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
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

  // member: speed_slider_fraction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SetSpeedSliderFraction_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetSpeedSliderFraction_Request = {
  "ur_msgs::srv",
  "SetSpeedSliderFraction_Request",
  _SetSpeedSliderFraction_Request__cdr_serialize,
  _SetSpeedSliderFraction_Request__cdr_deserialize,
  _SetSpeedSliderFraction_Request__get_serialized_size,
  _SetSpeedSliderFraction_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetSpeedSliderFraction_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetSpeedSliderFraction_Request,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_hash,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description,
  &ur_msgs__srv__SetSpeedSliderFraction_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Request)() {
  return &_SetSpeedSliderFraction_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetSpeedSliderFraction_Response__ros_msg_type = ur_msgs__srv__SetSpeedSliderFraction_Response;

static bool _SetSpeedSliderFraction_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetSpeedSliderFraction_Response__ros_msg_type * ros_message = static_cast<const _SetSpeedSliderFraction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _SetSpeedSliderFraction_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetSpeedSliderFraction_Response__ros_msg_type * ros_message = static_cast<_SetSpeedSliderFraction_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetSpeedSliderFraction_Response__ros_msg_type * ros_message = static_cast<const _SetSpeedSliderFraction_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetSpeedSliderFraction_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
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

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetSpeedSliderFraction_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetSpeedSliderFraction_Response = {
  "ur_msgs::srv",
  "SetSpeedSliderFraction_Response",
  _SetSpeedSliderFraction_Response__cdr_serialize,
  _SetSpeedSliderFraction_Response__cdr_deserialize,
  _SetSpeedSliderFraction_Response__get_serialized_size,
  _SetSpeedSliderFraction_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetSpeedSliderFraction_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetSpeedSliderFraction_Response,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_hash,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description,
  &ur_msgs__srv__SetSpeedSliderFraction_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Response)() {
  return &_SetSpeedSliderFraction_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__struct.h"
// already included above
// #include "ur_msgs/srv/detail/set_speed_slider_fraction__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_msgs
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_msgs
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ur_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();
size_t get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Request)();
size_t get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Response)();


using _SetSpeedSliderFraction_Event__ros_msg_type = ur_msgs__srv__SetSpeedSliderFraction_Event;

static bool _SetSpeedSliderFraction_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetSpeedSliderFraction_Event__ros_msg_type * ros_message = static_cast<const _SetSpeedSliderFraction_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _SetSpeedSliderFraction_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetSpeedSliderFraction_Event__ros_msg_type * ros_message = static_cast<_SetSpeedSliderFraction_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__fini(&ros_message->request);
    }
    if (!ur_msgs__srv__SetSpeedSliderFraction_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__fini(&ros_message->response);
    }
    if (!ur_msgs__srv__SetSpeedSliderFraction_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetSpeedSliderFraction_Event__ros_msg_type * ros_message = static_cast<const _SetSpeedSliderFraction_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetSpeedSliderFraction_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ur_msgs
size_t max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Event(
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

  // member: info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetSpeedSliderFraction_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ur_msgs__srv__SetSpeedSliderFraction_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetSpeedSliderFraction_Event = {
  "ur_msgs::srv",
  "SetSpeedSliderFraction_Event",
  _SetSpeedSliderFraction_Event__cdr_serialize,
  _SetSpeedSliderFraction_Event__cdr_deserialize,
  _SetSpeedSliderFraction_Event__get_serialized_size,
  _SetSpeedSliderFraction_Event__max_serialized_size
};

static rosidl_message_type_support_t _SetSpeedSliderFraction_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetSpeedSliderFraction_Event,
  get_message_typesupport_handle_function,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_hash,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_description,
  &ur_msgs__srv__SetSpeedSliderFraction_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Event)() {
  return &_SetSpeedSliderFraction_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ur_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ur_msgs/srv/set_speed_slider_fraction.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetSpeedSliderFraction__callbacks = {
  "ur_msgs::srv",
  "SetSpeedSliderFraction",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction_Response)(),
};

static rosidl_service_type_support_t SetSpeedSliderFraction__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetSpeedSliderFraction__callbacks,
  get_service_typesupport_handle_function,
  &_SetSpeedSliderFraction_Request__type_support,
  &_SetSpeedSliderFraction_Response__type_support,
  &_SetSpeedSliderFraction_Event__type_support,
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

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur_msgs, srv, SetSpeedSliderFraction)() {
  return &SetSpeedSliderFraction__handle;
}

#if defined(__cplusplus)
}
#endif
