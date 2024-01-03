// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from conveyor_interfaces:msg/ConveyorState.idl
// generated code does not contain a copyright notice
#include "conveyor_interfaces/msg/detail/conveyor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
conveyor_interfaces__msg__ConveyorState__init(conveyor_interfaces__msg__ConveyorState * msg)
{
  if (!msg) {
    return false;
  }
  // enabled
  // speed
  // direction
  return true;
}

void
conveyor_interfaces__msg__ConveyorState__fini(conveyor_interfaces__msg__ConveyorState * msg)
{
  if (!msg) {
    return;
  }
  // enabled
  // speed
  // direction
}

bool
conveyor_interfaces__msg__ConveyorState__are_equal(const conveyor_interfaces__msg__ConveyorState * lhs, const conveyor_interfaces__msg__ConveyorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  return true;
}

bool
conveyor_interfaces__msg__ConveyorState__copy(
  const conveyor_interfaces__msg__ConveyorState * input,
  conveyor_interfaces__msg__ConveyorState * output)
{
  if (!input || !output) {
    return false;
  }
  // enabled
  output->enabled = input->enabled;
  // speed
  output->speed = input->speed;
  // direction
  output->direction = input->direction;
  return true;
}

conveyor_interfaces__msg__ConveyorState *
conveyor_interfaces__msg__ConveyorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__ConveyorState * msg = (conveyor_interfaces__msg__ConveyorState *)allocator.allocate(sizeof(conveyor_interfaces__msg__ConveyorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(conveyor_interfaces__msg__ConveyorState));
  bool success = conveyor_interfaces__msg__ConveyorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
conveyor_interfaces__msg__ConveyorState__destroy(conveyor_interfaces__msg__ConveyorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    conveyor_interfaces__msg__ConveyorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
conveyor_interfaces__msg__ConveyorState__Sequence__init(conveyor_interfaces__msg__ConveyorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__ConveyorState * data = NULL;

  if (size) {
    data = (conveyor_interfaces__msg__ConveyorState *)allocator.zero_allocate(size, sizeof(conveyor_interfaces__msg__ConveyorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = conveyor_interfaces__msg__ConveyorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        conveyor_interfaces__msg__ConveyorState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
conveyor_interfaces__msg__ConveyorState__Sequence__fini(conveyor_interfaces__msg__ConveyorState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      conveyor_interfaces__msg__ConveyorState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

conveyor_interfaces__msg__ConveyorState__Sequence *
conveyor_interfaces__msg__ConveyorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  conveyor_interfaces__msg__ConveyorState__Sequence * array = (conveyor_interfaces__msg__ConveyorState__Sequence *)allocator.allocate(sizeof(conveyor_interfaces__msg__ConveyorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = conveyor_interfaces__msg__ConveyorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
conveyor_interfaces__msg__ConveyorState__Sequence__destroy(conveyor_interfaces__msg__ConveyorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    conveyor_interfaces__msg__ConveyorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
conveyor_interfaces__msg__ConveyorState__Sequence__are_equal(const conveyor_interfaces__msg__ConveyorState__Sequence * lhs, const conveyor_interfaces__msg__ConveyorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!conveyor_interfaces__msg__ConveyorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
conveyor_interfaces__msg__ConveyorState__Sequence__copy(
  const conveyor_interfaces__msg__ConveyorState__Sequence * input,
  conveyor_interfaces__msg__ConveyorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(conveyor_interfaces__msg__ConveyorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    conveyor_interfaces__msg__ConveyorState * data =
      (conveyor_interfaces__msg__ConveyorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!conveyor_interfaces__msg__ConveyorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          conveyor_interfaces__msg__ConveyorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!conveyor_interfaces__msg__ConveyorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
