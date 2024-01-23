// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from conveyor_interfaces:srv/EnableConveyor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "conveyor_interfaces/srv/detail/enable_conveyor__rosidl_typesupport_introspection_c.h"
#include "conveyor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "conveyor_interfaces/srv/detail/enable_conveyor__functions.h"
#include "conveyor_interfaces/srv/detail/enable_conveyor__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  conveyor_interfaces__srv__EnableConveyor_Request__init(message_memory);
}

void conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_fini_function(void * message_memory)
{
  conveyor_interfaces__srv__EnableConveyor_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_member_array[1] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces__srv__EnableConveyor_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_members = {
  "conveyor_interfaces__srv",  // message namespace
  "EnableConveyor_Request",  // message name
  1,  // number of fields
  sizeof(conveyor_interfaces__srv__EnableConveyor_Request),
  conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_member_array,  // message members
  conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_type_support_handle = {
  0,
  &conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conveyor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, srv, EnableConveyor_Request)() {
  if (!conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_type_support_handle.typesupport_identifier) {
    conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &conveyor_interfaces__srv__EnableConveyor_Request__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "conveyor_interfaces/srv/detail/enable_conveyor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "conveyor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "conveyor_interfaces/srv/detail/enable_conveyor__functions.h"
// already included above
// #include "conveyor_interfaces/srv/detail/enable_conveyor__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  conveyor_interfaces__srv__EnableConveyor_Response__init(message_memory);
}

void conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_fini_function(void * message_memory)
{
  conveyor_interfaces__srv__EnableConveyor_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces__srv__EnableConveyor_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(conveyor_interfaces__srv__EnableConveyor_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_members = {
  "conveyor_interfaces__srv",  // message namespace
  "EnableConveyor_Response",  // message name
  2,  // number of fields
  sizeof(conveyor_interfaces__srv__EnableConveyor_Response),
  conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_member_array,  // message members
  conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_type_support_handle = {
  0,
  &conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conveyor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, srv, EnableConveyor_Response)() {
  if (!conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_type_support_handle.typesupport_identifier) {
    conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &conveyor_interfaces__srv__EnableConveyor_Response__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "conveyor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "conveyor_interfaces/srv/detail/enable_conveyor__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_service_members = {
  "conveyor_interfaces__srv",  // service namespace
  "EnableConveyor",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_Request_message_type_support_handle,
  NULL  // response message
  // conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_Response_message_type_support_handle
};

static rosidl_service_type_support_t conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_service_type_support_handle = {
  0,
  &conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, srv, EnableConveyor_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, srv, EnableConveyor_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_conveyor_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, srv, EnableConveyor)() {
  if (!conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_service_type_support_handle.typesupport_identifier) {
    conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, srv, EnableConveyor_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, conveyor_interfaces, srv, EnableConveyor_Response)()->data;
  }

  return &conveyor_interfaces__srv__detail__enable_conveyor__rosidl_typesupport_introspection_c__EnableConveyor_service_type_support_handle;
}
