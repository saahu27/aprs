// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__STRUCT_H_
#define CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FORWARD'.
enum
{
  conveyor_interfaces__msg__ConveyorState__FORWARD = 0
};

/// Constant 'REVERSE'.
enum
{
  conveyor_interfaces__msg__ConveyorState__REVERSE = 1
};

/// Struct defined in msg/ConveyorState in the package conveyor_interfaces.
typedef struct conveyor_interfaces__msg__ConveyorState
{
  /// true if on, false if not
  bool enabled;
  /// m/s
  float speed;
  uint8_t direction;
} conveyor_interfaces__msg__ConveyorState;

// Struct for a sequence of conveyor_interfaces__msg__ConveyorState.
typedef struct conveyor_interfaces__msg__ConveyorState__Sequence
{
  conveyor_interfaces__msg__ConveyorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} conveyor_interfaces__msg__ConveyorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__STRUCT_H_
