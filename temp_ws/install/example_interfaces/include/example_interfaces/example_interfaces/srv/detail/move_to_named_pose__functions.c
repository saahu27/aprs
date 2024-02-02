// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from example_interfaces:srv/MoveToNamedPose.idl
// generated code does not contain a copyright notice
#include "example_interfaces/srv/detail/move_to_named_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pose`
#include "rosidl_runtime_c/string_functions.h"

bool
example_interfaces__srv__MoveToNamedPose_Request__init(example_interfaces__srv__MoveToNamedPose_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__String__init(&msg->pose)) {
    example_interfaces__srv__MoveToNamedPose_Request__fini(msg);
    return false;
  }
  return true;
}

void
example_interfaces__srv__MoveToNamedPose_Request__fini(example_interfaces__srv__MoveToNamedPose_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  rosidl_runtime_c__String__fini(&msg->pose);
}

bool
example_interfaces__srv__MoveToNamedPose_Request__are_equal(const example_interfaces__srv__MoveToNamedPose_Request * lhs, const example_interfaces__srv__MoveToNamedPose_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
example_interfaces__srv__MoveToNamedPose_Request__copy(
  const example_interfaces__srv__MoveToNamedPose_Request * input,
  example_interfaces__srv__MoveToNamedPose_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!rosidl_runtime_c__String__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

example_interfaces__srv__MoveToNamedPose_Request *
example_interfaces__srv__MoveToNamedPose_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__MoveToNamedPose_Request * msg = (example_interfaces__srv__MoveToNamedPose_Request *)allocator.allocate(sizeof(example_interfaces__srv__MoveToNamedPose_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__srv__MoveToNamedPose_Request));
  bool success = example_interfaces__srv__MoveToNamedPose_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_interfaces__srv__MoveToNamedPose_Request__destroy(example_interfaces__srv__MoveToNamedPose_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_interfaces__srv__MoveToNamedPose_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_interfaces__srv__MoveToNamedPose_Request__Sequence__init(example_interfaces__srv__MoveToNamedPose_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__MoveToNamedPose_Request * data = NULL;

  if (size) {
    data = (example_interfaces__srv__MoveToNamedPose_Request *)allocator.zero_allocate(size, sizeof(example_interfaces__srv__MoveToNamedPose_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__srv__MoveToNamedPose_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__srv__MoveToNamedPose_Request__fini(&data[i - 1]);
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
example_interfaces__srv__MoveToNamedPose_Request__Sequence__fini(example_interfaces__srv__MoveToNamedPose_Request__Sequence * array)
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
      example_interfaces__srv__MoveToNamedPose_Request__fini(&array->data[i]);
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

example_interfaces__srv__MoveToNamedPose_Request__Sequence *
example_interfaces__srv__MoveToNamedPose_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__MoveToNamedPose_Request__Sequence * array = (example_interfaces__srv__MoveToNamedPose_Request__Sequence *)allocator.allocate(sizeof(example_interfaces__srv__MoveToNamedPose_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__srv__MoveToNamedPose_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_interfaces__srv__MoveToNamedPose_Request__Sequence__destroy(example_interfaces__srv__MoveToNamedPose_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_interfaces__srv__MoveToNamedPose_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_interfaces__srv__MoveToNamedPose_Request__Sequence__are_equal(const example_interfaces__srv__MoveToNamedPose_Request__Sequence * lhs, const example_interfaces__srv__MoveToNamedPose_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_interfaces__srv__MoveToNamedPose_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_interfaces__srv__MoveToNamedPose_Request__Sequence__copy(
  const example_interfaces__srv__MoveToNamedPose_Request__Sequence * input,
  example_interfaces__srv__MoveToNamedPose_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_interfaces__srv__MoveToNamedPose_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    example_interfaces__srv__MoveToNamedPose_Request * data =
      (example_interfaces__srv__MoveToNamedPose_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_interfaces__srv__MoveToNamedPose_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          example_interfaces__srv__MoveToNamedPose_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!example_interfaces__srv__MoveToNamedPose_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
example_interfaces__srv__MoveToNamedPose_Response__init(example_interfaces__srv__MoveToNamedPose_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
example_interfaces__srv__MoveToNamedPose_Response__fini(example_interfaces__srv__MoveToNamedPose_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
example_interfaces__srv__MoveToNamedPose_Response__are_equal(const example_interfaces__srv__MoveToNamedPose_Response * lhs, const example_interfaces__srv__MoveToNamedPose_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
example_interfaces__srv__MoveToNamedPose_Response__copy(
  const example_interfaces__srv__MoveToNamedPose_Response * input,
  example_interfaces__srv__MoveToNamedPose_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

example_interfaces__srv__MoveToNamedPose_Response *
example_interfaces__srv__MoveToNamedPose_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__MoveToNamedPose_Response * msg = (example_interfaces__srv__MoveToNamedPose_Response *)allocator.allocate(sizeof(example_interfaces__srv__MoveToNamedPose_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(example_interfaces__srv__MoveToNamedPose_Response));
  bool success = example_interfaces__srv__MoveToNamedPose_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
example_interfaces__srv__MoveToNamedPose_Response__destroy(example_interfaces__srv__MoveToNamedPose_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    example_interfaces__srv__MoveToNamedPose_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
example_interfaces__srv__MoveToNamedPose_Response__Sequence__init(example_interfaces__srv__MoveToNamedPose_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__MoveToNamedPose_Response * data = NULL;

  if (size) {
    data = (example_interfaces__srv__MoveToNamedPose_Response *)allocator.zero_allocate(size, sizeof(example_interfaces__srv__MoveToNamedPose_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = example_interfaces__srv__MoveToNamedPose_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        example_interfaces__srv__MoveToNamedPose_Response__fini(&data[i - 1]);
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
example_interfaces__srv__MoveToNamedPose_Response__Sequence__fini(example_interfaces__srv__MoveToNamedPose_Response__Sequence * array)
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
      example_interfaces__srv__MoveToNamedPose_Response__fini(&array->data[i]);
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

example_interfaces__srv__MoveToNamedPose_Response__Sequence *
example_interfaces__srv__MoveToNamedPose_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  example_interfaces__srv__MoveToNamedPose_Response__Sequence * array = (example_interfaces__srv__MoveToNamedPose_Response__Sequence *)allocator.allocate(sizeof(example_interfaces__srv__MoveToNamedPose_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = example_interfaces__srv__MoveToNamedPose_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
example_interfaces__srv__MoveToNamedPose_Response__Sequence__destroy(example_interfaces__srv__MoveToNamedPose_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    example_interfaces__srv__MoveToNamedPose_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
example_interfaces__srv__MoveToNamedPose_Response__Sequence__are_equal(const example_interfaces__srv__MoveToNamedPose_Response__Sequence * lhs, const example_interfaces__srv__MoveToNamedPose_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!example_interfaces__srv__MoveToNamedPose_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
example_interfaces__srv__MoveToNamedPose_Response__Sequence__copy(
  const example_interfaces__srv__MoveToNamedPose_Response__Sequence * input,
  example_interfaces__srv__MoveToNamedPose_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(example_interfaces__srv__MoveToNamedPose_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    example_interfaces__srv__MoveToNamedPose_Response * data =
      (example_interfaces__srv__MoveToNamedPose_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!example_interfaces__srv__MoveToNamedPose_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          example_interfaces__srv__MoveToNamedPose_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!example_interfaces__srv__MoveToNamedPose_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
