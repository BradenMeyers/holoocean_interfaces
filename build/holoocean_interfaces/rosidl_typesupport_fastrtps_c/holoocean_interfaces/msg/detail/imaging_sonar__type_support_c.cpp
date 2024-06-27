// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/imaging_sonar__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "holoocean_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "holoocean_interfaces/msg/detail/imaging_sonar__struct.h"
#include "holoocean_interfaces/msg/detail/imaging_sonar__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // image_azimuth, image_range
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // image_azimuth, image_range

// forward declare type support functions


using _ImagingSonar__ros_msg_type = holoocean_interfaces__msg__ImagingSonar;

static bool _ImagingSonar__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImagingSonar__ros_msg_type * ros_message = static_cast<const _ImagingSonar__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: bins_azimuth
  {
    cdr << ros_message->bins_azimuth;
  }

  // Field name: bins_range
  {
    cdr << ros_message->bins_range;
  }

  // Field name: image_azimuth
  {
    size_t size = ros_message->image_azimuth.size;
    auto array_ptr = ros_message->image_azimuth.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: image_range
  {
    size_t size = ros_message->image_range.size;
    auto array_ptr = ros_message->image_range.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ImagingSonar__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImagingSonar__ros_msg_type * ros_message = static_cast<_ImagingSonar__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: bins_azimuth
  {
    cdr >> ros_message->bins_azimuth;
  }

  // Field name: bins_range
  {
    cdr >> ros_message->bins_range;
  }

  // Field name: image_azimuth
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->image_azimuth.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->image_azimuth);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->image_azimuth, size)) {
      fprintf(stderr, "failed to create array for field 'image_azimuth'");
      return false;
    }
    auto array_ptr = ros_message->image_azimuth.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: image_range
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->image_range.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->image_range);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->image_range, size)) {
      fprintf(stderr, "failed to create array for field 'image_range'");
      return false;
    }
    auto array_ptr = ros_message->image_range.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_holoocean_interfaces
size_t get_serialized_size_holoocean_interfaces__msg__ImagingSonar(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImagingSonar__ros_msg_type * ros_message = static_cast<const _ImagingSonar__ros_msg_type *>(untyped_ros_message);
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
  // field.name bins_azimuth
  {
    size_t item_size = sizeof(ros_message->bins_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bins_range
  {
    size_t item_size = sizeof(ros_message->bins_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name image_azimuth
  {
    size_t array_size = ros_message->image_azimuth.size;
    auto array_ptr = ros_message->image_azimuth.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name image_range
  {
    size_t array_size = ros_message->image_range.size;
    auto array_ptr = ros_message->image_range.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImagingSonar__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_holoocean_interfaces__msg__ImagingSonar(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_holoocean_interfaces
size_t max_serialized_size_holoocean_interfaces__msg__ImagingSonar(
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
  // member: bins_azimuth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bins_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: image_azimuth
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: image_range
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = holoocean_interfaces__msg__ImagingSonar;
    is_plain =
      (
      offsetof(DataType, image_range) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ImagingSonar__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_holoocean_interfaces__msg__ImagingSonar(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImagingSonar = {
  "holoocean_interfaces::msg",
  "ImagingSonar",
  _ImagingSonar__cdr_serialize,
  _ImagingSonar__cdr_deserialize,
  _ImagingSonar__get_serialized_size,
  _ImagingSonar__max_serialized_size
};

static rosidl_message_type_support_t _ImagingSonar__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImagingSonar,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, holoocean_interfaces, msg, ImagingSonar)() {
  return &_ImagingSonar__type_support;
}

#if defined(__cplusplus)
}
#endif
