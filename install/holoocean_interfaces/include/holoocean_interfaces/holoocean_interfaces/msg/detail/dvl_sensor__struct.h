// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/DVLSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DVLSensor in the package holoocean_interfaces.
/**
  * DVLSensor message
  * Contains timestamp, velocity, and range measurements
 */
typedef struct holoocean_interfaces__msg__DVLSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Velocity measurements in meters per second
  float velocity[3];
  /// Range measurements in meters
  float range[4];
} holoocean_interfaces__msg__DVLSensor;

// Struct for a sequence of holoocean_interfaces__msg__DVLSensor.
typedef struct holoocean_interfaces__msg__DVLSensor__Sequence
{
  holoocean_interfaces__msg__DVLSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__DVLSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__DVL_SENSOR__STRUCT_H_
