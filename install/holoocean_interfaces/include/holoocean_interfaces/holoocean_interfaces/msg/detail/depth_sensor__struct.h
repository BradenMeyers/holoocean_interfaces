// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/DepthSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__DEPTH_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__DEPTH_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DepthSensor in the package holoocean_interfaces.
/**
  * DepthSensor message
  * Contains timestamp and depth measurement
 */
typedef struct holoocean_interfaces__msg__DepthSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Depth measurement in meters
  float depth;
} holoocean_interfaces__msg__DepthSensor;

// Struct for a sequence of holoocean_interfaces__msg__DepthSensor.
typedef struct holoocean_interfaces__msg__DepthSensor__Sequence
{
  holoocean_interfaces__msg__DepthSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__DepthSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__DEPTH_SENSOR__STRUCT_H_
