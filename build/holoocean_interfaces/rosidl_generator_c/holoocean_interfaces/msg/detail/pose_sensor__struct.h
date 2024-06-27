// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/PoseSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__POSE_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__POSE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PoseSensor in the package holoocean_interfaces.
/**
  * PoseSensor message
  * Contains timestamp and a 4x4 transformation matrix
 */
typedef struct holoocean_interfaces__msg__PoseSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// 4x4 transformation matrix
  float matrix[16];
} holoocean_interfaces__msg__PoseSensor;

// Struct for a sequence of holoocean_interfaces__msg__PoseSensor.
typedef struct holoocean_interfaces__msg__PoseSensor__Sequence
{
  holoocean_interfaces__msg__PoseSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__PoseSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__POSE_SENSOR__STRUCT_H_
