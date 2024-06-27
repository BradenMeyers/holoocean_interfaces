// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from holoocean_interfaces:msg/RGBCamera.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__TRAITS_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "holoocean_interfaces/msg/detail/rgb_camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace holoocean_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGBCamera & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: channels
  {
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << ", ";
  }

  // member: image
  {
    if (msg.image.size() == 0) {
      out << "image: []";
    } else {
      out << "image: [";
      size_t pending_items = msg.image.size();
      for (auto item : msg.image) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RGBCamera & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channels: ";
    rosidl_generator_traits::value_to_yaml(msg.channels, out);
    out << "\n";
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image.size() == 0) {
      out << "image: []\n";
    } else {
      out << "image:\n";
      for (auto item : msg.image) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RGBCamera & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace holoocean_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use holoocean_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const holoocean_interfaces::msg::RGBCamera & msg,
  std::ostream & out, size_t indentation = 0)
{
  holoocean_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use holoocean_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const holoocean_interfaces::msg::RGBCamera & msg)
{
  return holoocean_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<holoocean_interfaces::msg::RGBCamera>()
{
  return "holoocean_interfaces::msg::RGBCamera";
}

template<>
inline const char * name<holoocean_interfaces::msg::RGBCamera>()
{
  return "holoocean_interfaces/msg/RGBCamera";
}

template<>
struct has_fixed_size<holoocean_interfaces::msg::RGBCamera>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<holoocean_interfaces::msg::RGBCamera>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<holoocean_interfaces::msg::RGBCamera>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__RGB_CAMERA__TRAITS_HPP_
