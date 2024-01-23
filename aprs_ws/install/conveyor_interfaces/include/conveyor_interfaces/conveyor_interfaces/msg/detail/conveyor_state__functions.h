// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice

#ifndef CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__FUNCTIONS_H_
#define CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "conveyor_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "conveyor_interfaces/msg/detail/conveyor_state__struct.h"

/// Initialize msg/ConveyorState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * conveyor_interfaces__msg__ConveyorState
 * )) before or use
 * conveyor_interfaces__msg__ConveyorState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
bool
conveyor_interfaces__msg__ConveyorState__init(conveyor_interfaces__msg__ConveyorState * msg);

/// Finalize msg/ConveyorState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
void
conveyor_interfaces__msg__ConveyorState__fini(conveyor_interfaces__msg__ConveyorState * msg);

/// Create msg/ConveyorState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * conveyor_interfaces__msg__ConveyorState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
conveyor_interfaces__msg__ConveyorState *
conveyor_interfaces__msg__ConveyorState__create();

/// Destroy msg/ConveyorState message.
/**
 * It calls
 * conveyor_interfaces__msg__ConveyorState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
void
conveyor_interfaces__msg__ConveyorState__destroy(conveyor_interfaces__msg__ConveyorState * msg);

/// Check for msg/ConveyorState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
bool
conveyor_interfaces__msg__ConveyorState__are_equal(const conveyor_interfaces__msg__ConveyorState * lhs, const conveyor_interfaces__msg__ConveyorState * rhs);

/// Copy a msg/ConveyorState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
bool
conveyor_interfaces__msg__ConveyorState__copy(
  const conveyor_interfaces__msg__ConveyorState * input,
  conveyor_interfaces__msg__ConveyorState * output);

/// Initialize array of msg/ConveyorState messages.
/**
 * It allocates the memory for the number of elements and calls
 * conveyor_interfaces__msg__ConveyorState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
bool
conveyor_interfaces__msg__ConveyorState__Sequence__init(conveyor_interfaces__msg__ConveyorState__Sequence * array, size_t size);

/// Finalize array of msg/ConveyorState messages.
/**
 * It calls
 * conveyor_interfaces__msg__ConveyorState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
void
conveyor_interfaces__msg__ConveyorState__Sequence__fini(conveyor_interfaces__msg__ConveyorState__Sequence * array);

/// Create array of msg/ConveyorState messages.
/**
 * It allocates the memory for the array and calls
 * conveyor_interfaces__msg__ConveyorState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
conveyor_interfaces__msg__ConveyorState__Sequence *
conveyor_interfaces__msg__ConveyorState__Sequence__create(size_t size);

/// Destroy array of msg/ConveyorState messages.
/**
 * It calls
 * conveyor_interfaces__msg__ConveyorState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
void
conveyor_interfaces__msg__ConveyorState__Sequence__destroy(conveyor_interfaces__msg__ConveyorState__Sequence * array);

/// Check for msg/ConveyorState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
bool
conveyor_interfaces__msg__ConveyorState__Sequence__are_equal(const conveyor_interfaces__msg__ConveyorState__Sequence * lhs, const conveyor_interfaces__msg__ConveyorState__Sequence * rhs);

/// Copy an array of msg/ConveyorState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_conveyor_interfaces
bool
conveyor_interfaces__msg__ConveyorState__Sequence__copy(
  const conveyor_interfaces__msg__ConveyorState__Sequence * input,
  conveyor_interfaces__msg__ConveyorState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CONVEYOR_INTERFACES__MSG__DETAIL__CONVEYOR_STATE__FUNCTIONS_H_
