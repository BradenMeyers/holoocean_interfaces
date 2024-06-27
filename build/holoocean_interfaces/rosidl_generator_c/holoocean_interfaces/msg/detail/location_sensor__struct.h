// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/LocationSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__LOCATION_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__LOCATION_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LocationSensor in the package holoocean_interfaces.
/**
  * LocationSensor message
  * Contains timestamp and position measurements
 */
typedef struct holoocean_interfaces__msg__LocationSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Position measurements in meters
  float position[3];
} holoocean_interfaces__msg__LocationSensor;

// Struct for a sequence of holoocean_interfaces__msg__LocationSensor.
typedef struct holoocean_interfaces__msg__LocationSensor__Sequence
{
  holoocean_interfaces__msg__LocationSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__LocationSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__LOCATION_SENSOR__STRUCT_H_