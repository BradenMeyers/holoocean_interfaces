// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from holoocean_interfaces:msg/OrientationSensor.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/orientation_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
holoocean_interfaces__msg__OrientationSensor__init(holoocean_interfaces__msg__OrientationSensor * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // matrix
  return true;
}

void
holoocean_interfaces__msg__OrientationSensor__fini(holoocean_interfaces__msg__OrientationSensor * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // matrix
}

bool
holoocean_interfaces__msg__OrientationSensor__are_equal(const holoocean_interfaces__msg__OrientationSensor * lhs, const holoocean_interfaces__msg__OrientationSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // matrix
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->matrix[i] != rhs->matrix[i]) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__OrientationSensor__copy(
  const holoocean_interfaces__msg__OrientationSensor * input,
  holoocean_interfaces__msg__OrientationSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // matrix
  for (size_t i = 0; i < 9; ++i) {
    output->matrix[i] = input->matrix[i];
  }
  return true;
}

holoocean_interfaces__msg__OrientationSensor *
holoocean_interfaces__msg__OrientationSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__OrientationSensor * msg = (holoocean_interfaces__msg__OrientationSensor *)allocator.allocate(sizeof(holoocean_interfaces__msg__OrientationSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(holoocean_interfaces__msg__OrientationSensor));
  bool success = holoocean_interfaces__msg__OrientationSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
holoocean_interfaces__msg__OrientationSensor__destroy(holoocean_interfaces__msg__OrientationSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    holoocean_interfaces__msg__OrientationSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
holoocean_interfaces__msg__OrientationSensor__Sequence__init(holoocean_interfaces__msg__OrientationSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__OrientationSensor * data = NULL;

  if (size) {
    data = (holoocean_interfaces__msg__OrientationSensor *)allocator.zero_allocate(size, sizeof(holoocean_interfaces__msg__OrientationSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = holoocean_interfaces__msg__OrientationSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        holoocean_interfaces__msg__OrientationSensor__fini(&data[i - 1]);
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
holoocean_interfaces__msg__OrientationSensor__Sequence__fini(holoocean_interfaces__msg__OrientationSensor__Sequence * array)
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
      holoocean_interfaces__msg__OrientationSensor__fini(&array->data[i]);
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

holoocean_interfaces__msg__OrientationSensor__Sequence *
holoocean_interfaces__msg__OrientationSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__OrientationSensor__Sequence * array = (holoocean_interfaces__msg__OrientationSensor__Sequence *)allocator.allocate(sizeof(holoocean_interfaces__msg__OrientationSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = holoocean_interfaces__msg__OrientationSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
holoocean_interfaces__msg__OrientationSensor__Sequence__destroy(holoocean_interfaces__msg__OrientationSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    holoocean_interfaces__msg__OrientationSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
holoocean_interfaces__msg__OrientationSensor__Sequence__are_equal(const holoocean_interfaces__msg__OrientationSensor__Sequence * lhs, const holoocean_interfaces__msg__OrientationSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!holoocean_interfaces__msg__OrientationSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__OrientationSensor__Sequence__copy(
  const holoocean_interfaces__msg__OrientationSensor__Sequence * input,
  holoocean_interfaces__msg__OrientationSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(holoocean_interfaces__msg__OrientationSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    holoocean_interfaces__msg__OrientationSensor * data =
      (holoocean_interfaces__msg__OrientationSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!holoocean_interfaces__msg__OrientationSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          holoocean_interfaces__msg__OrientationSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!holoocean_interfaces__msg__OrientationSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
