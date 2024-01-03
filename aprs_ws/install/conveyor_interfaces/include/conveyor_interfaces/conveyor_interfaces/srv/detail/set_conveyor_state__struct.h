// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conveyor_interfaces:srv/SetConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__STRUCT_H_
#define CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetConveyorState in the package conveyor_interfaces.
typedef struct conveyor_interfaces__srv__SetConveyorState_Request
{
  float speed;
  uint8_t direction;
} conveyor_interfaces__srv__SetConveyorState_Request;

// Struct for a sequence of conveyor_interfaces__srv__SetConveyorState_Request.
typedef struct conveyor_interfaces__srv__SetConveyorState_Request__Sequence
{
  conveyor_interfaces__srv__SetConveyorState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__srv__SetConveyorState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetConveyorState in the package conveyor_interfaces.
typedef struct conveyor_interfaces__srv__SetConveyorState_Response
{
  bool success;
  rosidl_runtime_c__String message;
} conveyor_interfaces__srv__SetConveyorState_Response;

// Struct for a sequence of conveyor_interfaces__srv__SetConveyorState_Response.
typedef struct conveyor_interfaces__srv__SetConveyorState_Response__Sequence
{
  conveyor_interfaces__srv__SetConveyorState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__srv__SetConveyorState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__SRV__DETAIL__SET_CONVEYOR_STATE__STRUCT_H_
