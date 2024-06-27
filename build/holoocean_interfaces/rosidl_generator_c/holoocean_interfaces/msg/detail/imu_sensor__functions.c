// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from holoocean_interfaces:msg/IMUSensor.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/imu_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
holoocean_interfaces__msg__IMUSensor__init(holoocean_interfaces__msg__IMUSensor * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // acceleration
  // angular_velocity
  // acceleration_bias
  // angular_velocity_bias
  return true;
}

void
holoocean_interfaces__msg__IMUSensor__fini(holoocean_interfaces__msg__IMUSensor * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // acceleration
  // angular_velocity
  // acceleration_bias
  // angular_velocity_bias
}

bool
holoocean_interfaces__msg__IMUSensor__are_equal(const holoocean_interfaces__msg__IMUSensor * lhs, const holoocean_interfaces__msg__IMUSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // acceleration
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acceleration[i] != rhs->acceleration[i]) {
      return false;
    }
  }
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->angular_velocity[i] != rhs->angular_velocity[i]) {
      return false;
    }
  }
  // acceleration_bias
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->acceleration_bias[i] != rhs->acceleration_bias[i]) {
      return false;
    }
  }
  // angular_velocity_bias
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->angular_velocity_bias[i] != rhs->angular_velocity_bias[i]) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__IMUSensor__copy(
  const holoocean_interfaces__msg__IMUSensor * input,
  holoocean_interfaces__msg__IMUSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // acceleration
  for (size_t i = 0; i < 3; ++i) {
    output->acceleration[i] = input->acceleration[i];
  }
  // angular_velocity
  for (size_t i = 0; i < 3; ++i) {
    output->angular_velocity[i] = input->angular_velocity[i];
  }
  // acceleration_bias
  for (size_t i = 0; i < 3; ++i) {
    output->acceleration_bias[i] = input->acceleration_bias[i];
  }
  // angular_velocity_bias
  for (size_t i = 0; i < 3; ++i) {
    output->angular_velocity_bias[i] = input->angular_velocity_bias[i];
  }
  return true;
}

holoocean_interfaces__msg__IMUSensor *
holoocean_interfaces__msg__IMUSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__IMUSensor * msg = (holoocean_interfaces__msg__IMUSensor *)allocator.allocate(sizeof(holoocean_interfaces__msg__IMUSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(holoocean_interfaces__msg__IMUSensor));
  bool success = holoocean_interfaces__msg__IMUSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
holoocean_interfaces__msg__IMUSensor__destroy(holoocean_interfaces__msg__IMUSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    holoocean_interfaces__msg__IMUSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
holoocean_interfaces__msg__IMUSensor__Sequence__init(holoocean_interfaces__msg__IMUSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__IMUSensor * data = NULL;

  if (size) {
    data = (holoocean_interfaces__msg__IMUSensor *)allocator.zero_allocate(size, sizeof(holoocean_interfaces__msg__IMUSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = holoocean_interfaces__msg__IMUSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        holoocean_interfaces__msg__IMUSensor__fini(&data[i - 1]);
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
holoocean_interfaces__msg__IMUSensor__Sequence__fini(holoocean_interfaces__msg__IMUSensor__Sequence * array)
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
      holoocean_interfaces__msg__IMUSensor__fini(&array->data[i]);
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

holoocean_interfaces__msg__IMUSensor__Sequence *
holoocean_interfaces__msg__IMUSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__IMUSensor__Sequence * array = (holoocean_interfaces__msg__IMUSensor__Sequence *)allocator.allocate(sizeof(holoocean_interfaces__msg__IMUSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = holoocean_interfaces__msg__IMUSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
holoocean_interfaces__msg__IMUSensor__Sequence__destroy(holoocean_interfaces__msg__IMUSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    holoocean_interfaces__msg__IMUSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
holoocean_interfaces__msg__IMUSensor__Sequence__are_equal(const holoocean_interfaces__msg__IMUSensor__Sequence * lhs, const holoocean_interfaces__msg__IMUSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!holoocean_interfaces__msg__IMUSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__IMUSensor__Sequence__copy(
  const holoocean_interfaces__msg__IMUSensor__Sequence * input,
  holoocean_interfaces__msg__IMUSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(holoocean_interfaces__msg__IMUSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    holoocean_interfaces__msg__IMUSensor * data =
      (holoocean_interfaces__msg__IMUSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!holoocean_interfaces__msg__IMUSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          holoocean_interfaces__msg__IMUSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!holoocean_interfaces__msg__IMUSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
