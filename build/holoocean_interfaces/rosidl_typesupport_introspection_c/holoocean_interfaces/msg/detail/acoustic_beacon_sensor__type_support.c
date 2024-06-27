// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from holoocean_interfaces:msg/AcousticBeaconSensor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__rosidl_typesupport_introspection_c.h"
#include "holoocean_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__functions.h"
#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__struct.h"


// Include directives for member types
// Member `msg_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  holoocean_interfaces__msg__AcousticBeaconSensor__init(message_memory);
}

void holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_fini_function(void * message_memory)
{
  holoocean_interfaces__msg__AcousticBeaconSensor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__AcousticBeaconSensor, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__AcousticBeaconSensor, msg_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "from_beacon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__AcousticBeaconSensor, from_beacon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "azimuth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__AcousticBeaconSensor, azimuth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__AcousticBeaconSensor, elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__AcousticBeaconSensor, range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(holoocean_interfaces__msg__AcousticBeaconSensor, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_members = {
  "holoocean_interfaces__msg",  // message namespace
  "AcousticBeaconSensor",  // message name
  7,  // number of fields
  sizeof(holoocean_interfaces__msg__AcousticBeaconSensor),
  holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_member_array,  // message members
  holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_type_support_handle = {
  0,
  &holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_holoocean_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, holoocean_interfaces, msg, AcousticBeaconSensor)() {
  if (!holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_type_support_handle.typesupport_identifier) {
    holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &holoocean_interfaces__msg__AcousticBeaconSensor__rosidl_typesupport_introspection_c__AcousticBeaconSensor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
