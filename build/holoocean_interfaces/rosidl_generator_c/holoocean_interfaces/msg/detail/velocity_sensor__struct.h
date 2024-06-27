// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/VelocitySensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VelocitySensor in the package holoocean_interfaces.
/**
  * VelocitySensor message
  * Contains timestamp and velocity measurements
 */
typedef struct holoocean_interfaces__msg__VelocitySensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Velocity measurements in meters per second
  float velocity[3];
} holoocean_interfaces__msg__VelocitySensor;

// Struct for a sequence of holoocean_interfaces__msg__VelocitySensor.
typedef struct holoocean_interfaces__msg__VelocitySensor__Sequence
{
  holoocean_interfaces__msg__VelocitySensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__VelocitySensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__STRUCT_H_
