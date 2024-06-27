// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/RangeFinderSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'distances'
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RangeFinderSensor in the package holoocean_interfaces.
/**
  * RangeFinderSensor message
  * Contains timestamp, count of distances and angles, and their measurements
 */
typedef struct holoocean_interfaces__msg__RangeFinderSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Number of distance measurements
  int32_t count;
  /// Distance measurements in meters
  rosidl_runtime_c__float__Sequence distances;
  /// Angle measurements in radians
  rosidl_runtime_c__float__Sequence angles;
} holoocean_interfaces__msg__RangeFinderSensor;

// Struct for a sequence of holoocean_interfaces__msg__RangeFinderSensor.
typedef struct holoocean_interfaces__msg__RangeFinderSensor__Sequence
{
  holoocean_interfaces__msg__RangeFinderSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__RangeFinderSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__STRUCT_H_
