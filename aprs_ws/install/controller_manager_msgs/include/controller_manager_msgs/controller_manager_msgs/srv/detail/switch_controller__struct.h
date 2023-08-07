// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from controller_manager_msgs:srv/SwitchController.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "controller_manager_msgs/srv/switch_controller.h"


#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BEST_EFFORT'.
enum
{
  controller_manager_msgs__srv__SwitchController_Request__BEST_EFFORT = 1l
};

/// Constant 'STRICT'.
enum
{
  controller_manager_msgs__srv__SwitchController_Request__STRICT = 2l
};

// Include directives for member types
// Member 'activate_controllers'
// Member 'deactivate_controllers'
#include "rosidl_runtime_c/string.h"
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/SwitchController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__SwitchController_Request
{
  /// To switch controllers, specify
  ///  * the list of controller names to activate,
  ///  * the list of controller names to deactivate, and
  ///  * the strictness (BEST_EFFORT or STRICT)
  ///    * STRICT means that switching will fail if anything goes wrong (an invalid
  ///      controller name, a controller that failed to activate, etc. )
  ///    * BEST_EFFORT means that even when something goes wrong with on controller,
  ///      the service will still try to activate/stop the remaining controllers
  ///  * activate the controllers as soon as their hardware dependencies are ready, will
  ///    wait for all interfaces to be ready otherwise
  ///  * the timeout before aborting pending controllers. Zero for infinite
  /// The return value "ok" indicates if the controllers were switched
  /// successfully or not.  The meaning of success depends on the
  /// specified strictness.
  rosidl_runtime_c__String__Sequence activate_controllers;
  rosidl_runtime_c__String__Sequence deactivate_controllers;
  int32_t strictness;
  bool activate_asap;
  builtin_interfaces__msg__Duration timeout;
} controller_manager_msgs__srv__SwitchController_Request;

// Struct for a sequence of controller_manager_msgs__srv__SwitchController_Request.
typedef struct controller_manager_msgs__srv__SwitchController_Request__Sequence
{
  controller_manager_msgs__srv__SwitchController_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__SwitchController_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SwitchController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__SwitchController_Response
{
  bool ok;
} controller_manager_msgs__srv__SwitchController_Response;

// Struct for a sequence of controller_manager_msgs__srv__SwitchController_Response.
typedef struct controller_manager_msgs__srv__SwitchController_Response__Sequence
{
  controller_manager_msgs__srv__SwitchController_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__SwitchController_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  controller_manager_msgs__srv__SwitchController_Event__request__MAX_SIZE = 1
};
// response
enum
{
  controller_manager_msgs__srv__SwitchController_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SwitchController in the package controller_manager_msgs.
typedef struct controller_manager_msgs__srv__SwitchController_Event
{
  service_msgs__msg__ServiceEventInfo info;
  controller_manager_msgs__srv__SwitchController_Request__Sequence request;
  controller_manager_msgs__srv__SwitchController_Response__Sequence response;
} controller_manager_msgs__srv__SwitchController_Event;

// Struct for a sequence of controller_manager_msgs__srv__SwitchController_Event.
typedef struct controller_manager_msgs__srv__SwitchController_Event__Sequence
{
  controller_manager_msgs__srv__SwitchController_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} controller_manager_msgs__srv__SwitchController_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__SWITCH_CONTROLLER__STRUCT_H_
