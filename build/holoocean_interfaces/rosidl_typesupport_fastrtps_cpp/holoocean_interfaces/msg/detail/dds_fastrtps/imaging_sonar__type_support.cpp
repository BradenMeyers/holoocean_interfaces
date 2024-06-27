// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice
#include "holoocean_interfaces/msg/detail/imaging_sonar__rosidl_typesupport_fastrtps_cpp.hpp"
#include "holoocean_interfaces/msg/detail/imaging_sonar__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace holoocean_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_holoocean_interfaces
cdr_serialize(
  const holoocean_interfaces::msg::ImagingSonar & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: bins_azimuth
  cdr << ros_message.bins_azimuth;
  // Member: bins_range
  cdr << ros_message.bins_range;
  // Member: image_azimuth
  {
    cdr << ros_message.image_azimuth;
  }
  // Member: image_range
  {
    cdr << ros_message.image_range;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_holoocean_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  holoocean_interfaces::msg::ImagingSonar & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: bins_azimuth
  cdr >> ros_message.bins_azimuth;

  // Member: bins_range
  cdr >> ros_message.bins_range;

  // Member: image_azimuth
  {
    cdr >> ros_message.image_azimuth;
  }

  // Member: image_range
  {
    cdr >> ros_message.image_range;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_holoocean_interfaces
get_serialized_size(
  const holoocean_interfaces::msg::ImagingSonar & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bins_azimuth
  {
    size_t item_size = sizeof(ros_message.bins_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bins_range
  {
    size_t item_size = sizeof(ros_message.bins_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: image_azimuth
  {
    size_t array_size = ros_message.image_azimuth.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.image_azimuth[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: image_range
  {
    size_t array_size = ros_message.image_range.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.image_range[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_holoocean_interfaces
max_serialized_size_ImagingSonar(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: bins_azimuth
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bins_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: image_azimuth
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

  // Member: image_range
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
    using DataType = holoocean_interfaces::msg::ImagingSonar;
    is_plain =
      (
      offsetof(DataType, image_range) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImagingSonar__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const holoocean_interfaces::msg::ImagingSonar *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImagingSonar__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<holoocean_interfaces::msg::ImagingSonar *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImagingSonar__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const holoocean_interfaces::msg::ImagingSonar *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImagingSonar__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImagingSonar(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImagingSonar__callbacks = {
  "holoocean_interfaces::msg",
  "ImagingSonar",
  _ImagingSonar__cdr_serialize,
  _ImagingSonar__cdr_deserialize,
  _ImagingSonar__get_serialized_size,
  _ImagingSonar__max_serialized_size
};

static rosidl_message_type_support_t _ImagingSonar__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImagingSonar__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace holoocean_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_holoocean_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<holoocean_interfaces::msg::ImagingSonar>()
{
  return &holoocean_interfaces::msg::typesupport_fastrtps_cpp::_ImagingSonar__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, holoocean_interfaces, msg, ImagingSonar)() {
  return &holoocean_interfaces::msg::typesupport_fastrtps_cpp::_ImagingSonar__handle;
}

#ifdef __cplusplus
}
#endif
