// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image_azimuth'
// Member 'image_range'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ImagingSonar in the package holoocean_interfaces.
/**
  * ImagingSonar message
  * Contains timestamp, bins information, and image data
 */
typedef struct holoocean_interfaces__msg__ImagingSonar
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Number of azimuth bins
  int32_t bins_azimuth;
  /// Number of range bins
  int32_t bins_range;
  /// Image data separated into two lists
  /// Could make it one list by flattening array with numpy
  rosidl_runtime_c__float__Sequence image_azimuth;
  rosidl_runtime_c__float__Sequence image_range;
} holoocean_interfaces__msg__ImagingSonar;

// Struct for a sequence of holoocean_interfaces__msg__ImagingSonar.
typedef struct holoocean_interfaces__msg__ImagingSonar__Sequence
{
  holoocean_interfaces__msg__ImagingSonar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__ImagingSonar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__STRUCT_H_
