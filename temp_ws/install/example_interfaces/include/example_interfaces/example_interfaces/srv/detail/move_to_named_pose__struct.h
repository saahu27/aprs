// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from example_interfaces:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice

#ifndef EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__STRUCT_H_
#define EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveToNamedPose in the package example_interfaces.
typedef struct example_interfaces__srv__MoveToNamedPose_Request
{
  rosidl_runtime_c__String pose;
} example_interfaces__srv__MoveToNamedPose_Request;

// Struct for a sequence of example_interfaces__srv__MoveToNamedPose_Request.
typedef struct example_interfaces__srv__MoveToNamedPose_Request__Sequence
{
  example_interfaces__srv__MoveToNamedPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__MoveToNamedPose_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/MoveToNamedPose in the package example_interfaces.
typedef struct example_interfaces__srv__MoveToNamedPose_Response
{
  bool success;
} example_interfaces__srv__MoveToNamedPose_Response;

// Struct for a sequence of example_interfaces__srv__MoveToNamedPose_Response.
typedef struct example_interfaces__srv__MoveToNamedPose_Response__Sequence
{
  example_interfaces__srv__MoveToNamedPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} example_interfaces__srv__MoveToNamedPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // EXAMPLE_INTERFACES__SRV__DETAIL__MOVE_TO_NAMED_POSE__STRUCT_H_
