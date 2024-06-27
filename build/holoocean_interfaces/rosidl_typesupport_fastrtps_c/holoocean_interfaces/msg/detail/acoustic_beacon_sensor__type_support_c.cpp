// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from holoocean_interfaces:msg/AcousticBeaconSensor.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "holoocean_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__struct.h"
#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // msg_type
#include "rosidl_runtime_c/string_functions.h"  // msg_type

// forward declare type support functions


using _AcousticBeaconSensor__ros_msg_type = holoocean_interfaces__msg__AcousticBeaconSensor;

static bool _AcousticBeaconSensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AcousticBeaconSensor__ros_msg_type * ros_message = static_cast<const _AcousticBeaconSensor__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: msg_type
  {
    const rosidl_runtime_c__String * str = &ros_message->msg_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: from_beacon
  {
    cdr << ros_message->from_beacon;
  }

  // Field name: azimuth
  {
    cdr << ros_message->azimuth;
  }

  // Field name: elevation
  {
    cdr << ros_message->elevation;
  }

  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  return true;
}

static bool _AcousticBeaconSensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AcousticBeaconSensor__ros_msg_type * ros_message = static_cast<_AcousticBeaconSensor__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: msg_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->msg_type.data) {
      rosidl_runtime_c__String__init(&ros_message->msg_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->msg_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'msg_type'\n");
      return false;
    }
  }

  // Field name: from_beacon
  {
    cdr >> ros_message->from_beacon;
  }

  // Field name: azimuth
  {
    cdr >> ros_message->azimuth;
  }

  // Field name: elevation
  {
    cdr >> ros_message->elevation;
  }

  // Field name: range
  {
    cdr >> ros_message->range;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_holoocean_interfaces
size_t get_serialized_size_holoocean_interfaces__msg__AcousticBeaconSensor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AcousticBeaconSensor__ros_msg_type * ros_message = static_cast<const _AcousticBeaconSensor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->msg_type.size + 1);
  // field.name from_beacon
  {
    size_t item_size = sizeof(ros_message->from_beacon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth
  {
    size_t item_size = sizeof(ros_message->azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name elevation
  {
    size_t item_size = sizeof(ros_message->elevation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AcousticBeaconSensor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_holoocean_interfaces__msg__AcousticBeaconSensor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_holoocean_interfaces
size_t max_serialized_size_holoocean_interfaces__msg__AcousticBeaconSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: msg_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: from_beacon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: azimuth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: elevation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = holoocean_interfaces__msg__AcousticBeaconSensor;
    is_plain =
      (
      offsetof(DataType, z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AcousticBeaconSensor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_holoocean_interfaces__msg__AcousticBeaconSensor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AcousticBeaconSensor = {
  "holoocean_interfaces::msg",
  "AcousticBeaconSensor",
  _AcousticBeaconSensor__cdr_serialize,
  _AcousticBeaconSensor__cdr_deserialize,
  _AcousticBeaconSensor__get_serialized_size,
  _AcousticBeaconSensor__max_serialized_size
};

static rosidl_message_type_support_t _AcousticBeaconSensor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AcousticBeaconSensor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, holoocean_interfaces, msg, AcousticBeaconSensor)() {
  return &_AcousticBeaconSensor__type_support;
}

#if defined(__cplusplus)
}
#endif
