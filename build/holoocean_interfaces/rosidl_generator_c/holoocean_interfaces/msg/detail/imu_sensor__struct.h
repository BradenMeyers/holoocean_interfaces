// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/IMUSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IMUSensor in the package holoocean_interfaces.
/**
  * IMUSensor message
  * Contains timestamp, acceleration, angular velocity, and their biases
 */
typedef struct holoocean_interfaces__msg__IMUSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Acceleration measurements in meters per second squared
  float acceleration[3];
  /// Angular velocity measurements in radians per second
  float angular_velocity[3];
  /// Acceleration bias in meters per second squared
  float acceleration_bias[3];
  /// Angular velocity bias in radians per second
  float angular_velocity_bias[3];
} holoocean_interfaces__msg__IMUSensor;

// Struct for a sequence of holoocean_interfaces__msg__IMUSensor.
typedef struct holoocean_interfaces__msg__IMUSensor__Sequence
{
  holoocean_interfaces__msg__IMUSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__IMUSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__STRUCT_H_
