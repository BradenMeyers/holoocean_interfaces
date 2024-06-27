// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from holoocean_interfaces:msg/RGBCamera.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/rgb_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
holoocean_interfaces__msg__RGBCamera__init(holoocean_interfaces__msg__RGBCamera * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // width
  // height
  // channels
  // image
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->image, 0)) {
    holoocean_interfaces__msg__RGBCamera__fini(msg);
    return false;
  }
  return true;
}

void
holoocean_interfaces__msg__RGBCamera__fini(holoocean_interfaces__msg__RGBCamera * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // width
  // height
  // channels
  // image
  rosidl_runtime_c__int16__Sequence__fini(&msg->image);
}

bool
holoocean_interfaces__msg__RGBCamera__are_equal(const holoocean_interfaces__msg__RGBCamera * lhs, const holoocean_interfaces__msg__RGBCamera * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // channels
  if (lhs->channels != rhs->channels) {
    return false;
  }
  // image
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
holoocean_interfaces__msg__RGBCamera__copy(
  const holoocean_interfaces__msg__RGBCamera * input,
  holoocean_interfaces__msg__RGBCamera * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // channels
  output->channels = input->channels;
  // image
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

holoocean_interfaces__msg__RGBCamera *
holoocean_interfaces__msg__RGBCamera__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__RGBCamera * msg = (holoocean_interfaces__msg__RGBCamera *)allocator.allocate(sizeof(holoocean_interfaces__msg__RGBCamera), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(holoocean_interfaces__msg__RGBCamera));
  bool success = holoocean_interfaces__msg__RGBCamera__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
holoocean_interfaces__msg__RGBCamera__destroy(holoocean_interfaces__msg__RGBCamera * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    holoocean_interfaces__msg__RGBCamera__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
holoocean_interfaces__msg__RGBCamera__Sequence__init(holoocean_interfaces__msg__RGBCamera__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__RGBCamera * data = NULL;

  if (size) {
    data = (holoocean_interfaces__msg__RGBCamera *)allocator.zero_allocate(size, sizeof(holoocean_interfaces__msg__RGBCamera), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = holoocean_interfaces__msg__RGBCamera__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        holoocean_interfaces__msg__RGBCamera__fini(&data[i - 1]);
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
holoocean_interfaces__msg__RGBCamera__Sequence__fini(holoocean_interfaces__msg__RGBCamera__Sequence * array)
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
      holoocean_interfaces__msg__RGBCamera__fini(&array->data[i]);
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

holoocean_interfaces__msg__RGBCamera__Sequence *
holoocean_interfaces__msg__RGBCamera__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__RGBCamera__Sequence * array = (holoocean_interfaces__msg__RGBCamera__Sequence *)allocator.allocate(sizeof(holoocean_interfaces__msg__RGBCamera__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = holoocean_interfaces__msg__RGBCamera__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
holoocean_interfaces__msg__RGBCamera__Sequence__destroy(holoocean_interfaces__msg__RGBCamera__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    holoocean_interfaces__msg__RGBCamera__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
holoocean_interfaces__msg__RGBCamera__Sequence__are_equal(const holoocean_interfaces__msg__RGBCamera__Sequence * lhs, const holoocean_interfaces__msg__RGBCamera__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!holoocean_interfaces__msg__RGBCamera__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__RGBCamera__Sequence__copy(
  const holoocean_interfaces__msg__RGBCamera__Sequence * input,
  holoocean_interfaces__msg__RGBCamera__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(holoocean_interfaces__msg__RGBCamera);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    holoocean_interfaces__msg__RGBCamera * data =
      (holoocean_interfaces__msg__RGBCamera *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!holoocean_interfaces__msg__RGBCamera__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          holoocean_interfaces__msg__RGBCamera__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!holoocean_interfaces__msg__RGBCamera__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
