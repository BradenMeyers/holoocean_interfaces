// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from holoocean_interfaces:msg/AcousticBeaconSensor.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `msg_type`
#include "rosidl_runtime_c/string_functions.h"

bool
holoocean_interfaces__msg__AcousticBeaconSensor__init(holoocean_interfaces__msg__AcousticBeaconSensor * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // msg_type
  if (!rosidl_runtime_c__String__init(&msg->msg_type)) {
    holoocean_interfaces__msg__AcousticBeaconSensor__fini(msg);
    return false;
  }
  // from_beacon
  // azimuth
  // elevation
  // range
  // z
  return true;
}

void
holoocean_interfaces__msg__AcousticBeaconSensor__fini(holoocean_interfaces__msg__AcousticBeaconSensor * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // msg_type
  rosidl_runtime_c__String__fini(&msg->msg_type);
  // from_beacon
  // azimuth
  // elevation
  // range
  // z
}

bool
holoocean_interfaces__msg__AcousticBeaconSensor__are_equal(const holoocean_interfaces__msg__AcousticBeaconSensor * lhs, const holoocean_interfaces__msg__AcousticBeaconSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // msg_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->msg_type), &(rhs->msg_type)))
  {
    return false;
  }
  // from_beacon
  if (lhs->from_beacon != rhs->from_beacon) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
holoocean_interfaces__msg__AcousticBeaconSensor__copy(
  const holoocean_interfaces__msg__AcousticBeaconSensor * input,
  holoocean_interfaces__msg__AcousticBeaconSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // msg_type
  if (!rosidl_runtime_c__String__copy(
      &(input->msg_type), &(output->msg_type)))
  {
    return false;
  }
  // from_beacon
  output->from_beacon = input->from_beacon;
  // azimuth
  output->azimuth = input->azimuth;
  // elevation
  output->elevation = input->elevation;
  // range
  output->range = input->range;
  // z
  output->z = input->z;
  return true;
}

holoocean_interfaces__msg__AcousticBeaconSensor *
holoocean_interfaces__msg__AcousticBeaconSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__AcousticBeaconSensor * msg = (holoocean_interfaces__msg__AcousticBeaconSensor *)allocator.allocate(sizeof(holoocean_interfaces__msg__AcousticBeaconSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(holoocean_interfaces__msg__AcousticBeaconSensor));
  bool success = holoocean_interfaces__msg__AcousticBeaconSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
holoocean_interfaces__msg__AcousticBeaconSensor__destroy(holoocean_interfaces__msg__AcousticBeaconSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    holoocean_interfaces__msg__AcousticBeaconSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__init(holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__AcousticBeaconSensor * data = NULL;

  if (size) {
    data = (holoocean_interfaces__msg__AcousticBeaconSensor *)allocator.zero_allocate(size, sizeof(holoocean_interfaces__msg__AcousticBeaconSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = holoocean_interfaces__msg__AcousticBeaconSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        holoocean_interfaces__msg__AcousticBeaconSensor__fini(&data[i - 1]);
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
holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__fini(holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * array)
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
      holoocean_interfaces__msg__AcousticBeaconSensor__fini(&array->data[i]);
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

holoocean_interfaces__msg__AcousticBeaconSensor__Sequence *
holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * array = (holoocean_interfaces__msg__AcousticBeaconSensor__Sequence *)allocator.allocate(sizeof(holoocean_interfaces__msg__AcousticBeaconSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__destroy(holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__are_equal(const holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * lhs, const holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!holoocean_interfaces__msg__AcousticBeaconSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
holoocean_interfaces__msg__AcousticBeaconSensor__Sequence__copy(
  const holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * input,
  holoocean_interfaces__msg__AcousticBeaconSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(holoocean_interfaces__msg__AcousticBeaconSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    holoocean_interfaces__msg__AcousticBeaconSensor * data =
      (holoocean_interfaces__msg__AcousticBeaconSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!holoocean_interfaces__msg__AcousticBeaconSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          holoocean_interfaces__msg__AcousticBeaconSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!holoocean_interfaces__msg__AcousticBeaconSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
