// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from holoocean_interfaces:msg/RangeFinderSensor.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/range_finder_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `distances`
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
holoocean_interfaces__msg__RangeFinderSensor__init(holoocean_interfaces__msg__RangeFinderSensor * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // count
  // distances
  if (!rosidl_runtime_c__float__Sequence__init(&msg->distances, 0)) {
    holoocean_interfaces__msg__RangeFinderSensor__fini(msg);
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->angles, 0)) {
    holoocean_interfaces__msg__RangeFinderSensor__fini(msg);
    return false;
  }
  return true;
}

void
holoocean_interfaces__msg__RangeFinderSensor__fini(holoocean_interfaces__msg__RangeFinderSensor * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // count
  // distances
  rosidl_runtime_c__float__Sequence__fini(&msg->distances);
  // angles
  rosidl_runtime_c__float__Sequence__fini(&msg->angles);
}

bool
holoocean_interfaces__msg__RangeFinderSensor__are_equal(const holoocean_interfaces__msg__RangeFinderSensor * lhs, const holoocean_interfaces__msg__RangeFinderSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // distances
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->distances), &(rhs->distances)))
  {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->angles), &(rhs->angles)))
  {
    return false;
  }
  return true;
}

bool
holoocean_interfaces__msg__RangeFinderSensor__copy(
  const holoocean_interfaces__msg__RangeFinderSensor * input,
  holoocean_interfaces__msg__RangeFinderSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // count
  output->count = input->count;
  // distances
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->distances), &(output->distances)))
  {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->angles), &(output->angles)))
  {
    return false;
  }
  return true;
}

holoocean_interfaces__msg__RangeFinderSensor *
holoocean_interfaces__msg__RangeFinderSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__RangeFinderSensor * msg = (holoocean_interfaces__msg__RangeFinderSensor *)allocator.allocate(sizeof(holoocean_interfaces__msg__RangeFinderSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(holoocean_interfaces__msg__RangeFinderSensor));
  bool success = holoocean_interfaces__msg__RangeFinderSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
holoocean_interfaces__msg__RangeFinderSensor__destroy(holoocean_interfaces__msg__RangeFinderSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    holoocean_interfaces__msg__RangeFinderSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
holoocean_interfaces__msg__RangeFinderSensor__Sequence__init(holoocean_interfaces__msg__RangeFinderSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__RangeFinderSensor * data = NULL;

  if (size) {
    data = (holoocean_interfaces__msg__RangeFinderSensor *)allocator.zero_allocate(size, sizeof(holoocean_interfaces__msg__RangeFinderSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = holoocean_interfaces__msg__RangeFinderSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        holoocean_interfaces__msg__RangeFinderSensor__fini(&data[i - 1]);
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
holoocean_interfaces__msg__RangeFinderSensor__Sequence__fini(holoocean_interfaces__msg__RangeFinderSensor__Sequence * array)
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
      holoocean_interfaces__msg__RangeFinderSensor__fini(&array->data[i]);
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

holoocean_interfaces__msg__RangeFinderSensor__Sequence *
holoocean_interfaces__msg__RangeFinderSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__RangeFinderSensor__Sequence * array = (holoocean_interfaces__msg__RangeFinderSensor__Sequence *)allocator.allocate(sizeof(holoocean_interfaces__msg__RangeFinderSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = holoocean_interfaces__msg__RangeFinderSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
holoocean_interfaces__msg__RangeFinderSensor__Sequence__destroy(holoocean_interfaces__msg__RangeFinderSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    holoocean_interfaces__msg__RangeFinderSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
holoocean_interfaces__msg__RangeFinderSensor__Sequence__are_equal(const holoocean_interfaces__msg__RangeFinderSensor__Sequence * lhs, const holoocean_interfaces__msg__RangeFinderSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!holoocean_interfaces__msg__RangeFinderSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__RangeFinderSensor__Sequence__copy(
  const holoocean_interfaces__msg__RangeFinderSensor__Sequence * input,
  holoocean_interfaces__msg__RangeFinderSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(holoocean_interfaces__msg__RangeFinderSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    holoocean_interfaces__msg__RangeFinderSensor * data =
      (holoocean_interfaces__msg__RangeFinderSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!holoocean_interfaces__msg__RangeFinderSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          holoocean_interfaces__msg__RangeFinderSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!holoocean_interfaces__msg__RangeFinderSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
