// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conveyor_interfaces:srv/EnableConveyor.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__STRUCT_H_
#define CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EnableConveyor in the package conveyor_interfaces.
typedef struct conveyor_interfaces__srv__EnableConveyor_Request
{
  bool enable;
} conveyor_interfaces__srv__EnableConveyor_Request;

// Struct for a sequence of conveyor_interfaces__srv__EnableConveyor_Request.
typedef struct conveyor_interfaces__srv__EnableConveyor_Request__Sequence
{
  conveyor_interfaces__srv__EnableConveyor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__srv__EnableConveyor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EnableConveyor in the package conveyor_interfaces.
typedef struct conveyor_interfaces__srv__EnableConveyor_Response
{
  bool success;
  rosidl_runtime_c__String message;
} conveyor_interfaces__srv__EnableConveyor_Response;

// Struct for a sequence of conveyor_interfaces__srv__EnableConveyor_Response.
typedef struct conveyor_interfaces__srv__EnableConveyor_Response__Sequence
{
  conveyor_interfaces__srv__EnableConveyor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__srv__EnableConveyor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__SRV__DETAIL__ENABLE_CONVEYOR__STRUCT_H_
