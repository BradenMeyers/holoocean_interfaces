// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/GPSSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__GPS_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__GPS_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GPSSensor in the package holoocean_interfaces.
/**
  * GPSSensor message
  * Contains timestamp and position measurements
 */
typedef struct holoocean_interfaces__msg__GPSSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Position measurements in meters (latitude, longitude, altitude)
  float position[3];
} holoocean_interfaces__msg__GPSSensor;

// Struct for a sequence of holoocean_interfaces__msg__GPSSensor.
typedef struct holoocean_interfaces__msg__GPSSensor__Sequence
{
  holoocean_interfaces__msg__GPSSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__GPSSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__GPS_SENSOR__STRUCT_H_
