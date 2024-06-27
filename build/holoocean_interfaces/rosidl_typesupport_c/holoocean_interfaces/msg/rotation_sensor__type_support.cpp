// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from holoocean_interfaces:msg/RotationSensor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "holoocean_interfaces/msg/detail/rotation_sensor__struct.h"
#include "holoocean_interfaces/msg/detail/rotation_sensor__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace holoocean_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _RotationSensor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RotationSensor_type_support_ids_t;

static const _RotationSensor_type_support_ids_t _RotationSensor_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RotationSensor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RotationSensor_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RotationSensor_type_support_symbol_names_t _RotationSensor_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, holoocean_interfaces, msg, RotationSensor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, holoocean_interfaces, msg, RotationSensor)),
  }
};

typedef struct _RotationSensor_type_support_data_t
{
  void * data[2];
} _RotationSensor_type_support_data_t;

static _RotationSensor_type_support_data_t _RotationSensor_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RotationSensor_message_typesupport_map = {
  2,
  "holoocean_interfaces",
  &_RotationSensor_message_typesupport_ids.typesupport_identifier[0],
  &_RotationSensor_message_typesupport_symbol_names.symbol_name[0],
  &_RotationSensor_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RotationSensor_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RotationSensor_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace holoocean_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, holoocean_interfaces, msg, RotationSensor)() {
  return &::holoocean_interfaces::msg::rosidl_typesupport_c::RotationSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif