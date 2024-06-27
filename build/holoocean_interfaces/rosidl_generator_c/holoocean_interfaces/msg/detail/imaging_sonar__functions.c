// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/imaging_sonar__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_azimuth`
// Member `image_range`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
holoocean_interfaces__msg__ImagingSonar__init(holoocean_interfaces__msg__ImagingSonar * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // bins_azimuth
  // bins_range
  // image_azimuth
  if (!rosidl_runtime_c__float__Sequence__init(&msg->image_azimuth, 0)) {
    holoocean_interfaces__msg__ImagingSonar__fini(msg);
    return false;
  }
  // image_range
  if (!rosidl_runtime_c__float__Sequence__init(&msg->image_range, 0)) {
    holoocean_interfaces__msg__ImagingSonar__fini(msg);
    return false;
  }
  return true;
}

void
holoocean_interfaces__msg__ImagingSonar__fini(holoocean_interfaces__msg__ImagingSonar * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // bins_azimuth
  // bins_range
  // image_azimuth
  rosidl_runtime_c__float__Sequence__fini(&msg->image_azimuth);
  // image_range
  rosidl_runtime_c__float__Sequence__fini(&msg->image_range);
}

bool
holoocean_interfaces__msg__ImagingSonar__are_equal(const holoocean_interfaces__msg__ImagingSonar * lhs, const holoocean_interfaces__msg__ImagingSonar * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // bins_azimuth
  if (lhs->bins_azimuth != rhs->bins_azimuth) {
    return false;
  }
  // bins_range
  if (lhs->bins_range != rhs->bins_range) {
    return false;
  }
  // image_azimuth
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->image_azimuth), &(rhs->image_azimuth)))
  {
    return false;
  }
  // image_range
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->image_range), &(rhs->image_range)))
  {
    return false;
  }
  return true;
}

bool
holoocean_interfaces__msg__ImagingSonar__copy(
  const holoocean_interfaces__msg__ImagingSonar * input,
  holoocean_interfaces__msg__ImagingSonar * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // bins_azimuth
  output->bins_azimuth = input->bins_azimuth;
  // bins_range
  output->bins_range = input->bins_range;
  // image_azimuth
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->image_azimuth), &(output->image_azimuth)))
  {
    return false;
  }
  // image_range
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->image_range), &(output->image_range)))
  {
    return false;
  }
  return true;
}

holoocean_interfaces__msg__ImagingSonar *
holoocean_interfaces__msg__ImagingSonar__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__ImagingSonar * msg = (holoocean_interfaces__msg__ImagingSonar *)allocator.allocate(sizeof(holoocean_interfaces__msg__ImagingSonar), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(holoocean_interfaces__msg__ImagingSonar));
  bool success = holoocean_interfaces__msg__ImagingSonar__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
holoocean_interfaces__msg__ImagingSonar__destroy(holoocean_interfaces__msg__ImagingSonar * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    holoocean_interfaces__msg__ImagingSonar__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
holoocean_interfaces__msg__ImagingSonar__Sequence__init(holoocean_interfaces__msg__ImagingSonar__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__ImagingSonar * data = NULL;

  if (size) {
    data = (holoocean_interfaces__msg__ImagingSonar *)allocator.zero_allocate(size, sizeof(holoocean_interfaces__msg__ImagingSonar), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = holoocean_interfaces__msg__ImagingSonar__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        holoocean_interfaces__msg__ImagingSonar__fini(&data[i - 1]);
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
holoocean_interfaces__msg__ImagingSonar__Sequence__fini(holoocean_interfaces__msg__ImagingSonar__Sequence * array)
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
      holoocean_interfaces__msg__ImagingSonar__fini(&array->data[i]);
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

holoocean_interfaces__msg__ImagingSonar__Sequence *
holoocean_interfaces__msg__ImagingSonar__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__ImagingSonar__Sequence * array = (holoocean_interfaces__msg__ImagingSonar__Sequence *)allocator.allocate(sizeof(holoocean_interfaces__msg__ImagingSonar__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = holoocean_interfaces__msg__ImagingSonar__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
holoocean_interfaces__msg__ImagingSonar__Sequence__destroy(holoocean_interfaces__msg__ImagingSonar__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    holoocean_interfaces__msg__ImagingSonar__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
holoocean_interfaces__msg__ImagingSonar__Sequence__are_equal(const holoocean_interfaces__msg__ImagingSonar__Sequence * lhs, const holoocean_interfaces__msg__ImagingSonar__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!holoocean_interfaces__msg__ImagingSonar__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__ImagingSonar__Sequence__copy(
  const holoocean_interfaces__msg__ImagingSonar__Sequence * input,
  holoocean_interfaces__msg__ImagingSonar__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(holoocean_interfaces__msg__ImagingSonar);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    holoocean_interfaces__msg__ImagingSonar * data =
      (holoocean_interfaces__msg__ImagingSonar *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!holoocean_interfaces__msg__ImagingSonar__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          holoocean_interfaces__msg__ImagingSonar__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!holoocean_interfaces__msg__ImagingSonar__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
