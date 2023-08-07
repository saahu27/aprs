// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/UnloadController.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/unload_controller.h"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UnloadController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__UnloadController_Request
{
  /// To unload a controller, specify the "name" of the controller.
  /// The return value "ok" indicates if the controller was successfully
  /// unloaded or not
  rosidl_runtime_c__String name;
} controller_manager_msgs__srv__UnloadController_Request;

// Struct for a sequence of controller_manager_msgs__srv__UnloadController_Request.
typedef struct controller_manager_msgs__srv__UnloadController_Request__Sequence
{
  controller_manager_msgs__srv__UnloadController_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__UnloadController_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/UnloadController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__UnloadController_Response
{
  bool ok;
} controller_manager_msgs__srv__UnloadController_Response;

// Struct for a sequence of controller_manager_msgs__srv__UnloadController_Response.
typedef struct controller_manager_msgs__srv__UnloadController_Response__Sequence
{
  controller_manager_msgs__srv__UnloadController_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__UnloadController_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  controller_manager_msgs__srv__UnloadController_Event__request__MAX_SIZE = 1
};
// response
enum
{
  controller_manager_msgs__srv__UnloadController_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/UnloadController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__UnloadController_Event
{
  service_msgs__msg__ServiceEventInfo info;
  controller_manager_msgs__srv__UnloadController_Request__Sequence request;
  controller_manager_msgs__srv__UnloadController_Response__Sequence response;
} controller_manager_msgs__srv__UnloadController_Event;

// Struct for a sequence of controller_manager_msgs__srv__UnloadController_Event.
typedef struct controller_manager_msgs__srv__UnloadController_Event__Sequence
{
  controller_manager_msgs__srv__UnloadController_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__UnloadController_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__UNLOAD_CONTROLLER__STRUCT_H_
