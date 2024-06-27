// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/RGBCamera.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RGBCamera in the package holoocean_interfaces.
/**
  * RGBCamera message
  * Contains timestamp, image dimensions, and image data
 */
typedef struct holoocean_interfaces__msg__RGBCamera
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Image width in pixels
  int32_t width;
  /// Image height in pixels
  int32_t height;
  /// Number of color channels
  int32_t channels;
  /// Flattened image data as a 1D array
  /// Should be a 3D array but ROS does not support
  rosidl_runtime_c__int16__Sequence image;
} holoocean_interfaces__msg__RGBCamera;

// Struct for a sequence of holoocean_interfaces__msg__RGBCamera.
typedef struct holoocean_interfaces__msg__RGBCamera__Sequence
{
  holoocean_interfaces__msg__RGBCamera * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__RGBCamera__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__STRUCT_H_
