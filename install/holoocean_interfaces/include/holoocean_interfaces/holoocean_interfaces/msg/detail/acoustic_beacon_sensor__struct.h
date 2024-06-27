// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from holoocean_interfaces:msg/AcousticBeaconSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__STRUCT_H_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'msg_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AcousticBeaconSensor in the package holoocean_interfaces.
/**
  * AcousticBeaconSensor message
  * Contains timestamp, message type, beacon information, azimuth, elevation, range, and z-coordinate
 */
typedef struct holoocean_interfaces__msg__AcousticBeaconSensor
{
  /// Timestamp in nanoseconds
  int64_t timestamp;
  /// Message type
  rosidl_runtime_c__String msg_type;
  /// Beacon ID
  int32_t from_beacon;
  /// Azimuth in radians
  float azimuth;
  /// Elevation in radians
  float elevation;
  /// Range in meters
  float range;
  /// Z-coordinate in meters
  float z;
} holoocean_interfaces__msg__AcousticBeaconSensor;

// Struct for a sequence of holoocean_interfaces__msg__AcousticBeaconSensor.
typedef struct holoocean_interfaces__msg__AcousticBeaconSensor__Sequence
{
  holoocean_interfaces__msg__AcousticBeaconSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} holoocean_interfaces__msg__AcousticBeaconSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__STRUCT_H_
