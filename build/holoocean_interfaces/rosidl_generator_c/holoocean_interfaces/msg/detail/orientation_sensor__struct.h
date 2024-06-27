// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/OrientationSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ORIENTATION_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ORIENTATION_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OrientationSensor in the package holoocean_interfaces.
/**
  * OrientationSensor message
  * Contains timestamp and a 3x3 orientation matrix
 */
typedef struct holoocean_interfaces__msg__OrientationSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// 3x3 orientation matrix
  float matrix[9];
} holoocean_interfaces__msg__OrientationSensor;

// Struct for a sequence of holoocean_interfaces__msg__OrientationSensor.
typedef struct holoocean_interfaces__msg__OrientationSensor__Sequence
{
  holoocean_interfaces__msg__OrientationSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__OrientationSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ORIENTATION_SENSOR__STRUCT_H_
