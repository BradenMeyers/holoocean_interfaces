// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__TRAITS_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "holoocean_interfaces/msg/detail/imaging_sonar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace holoocean_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImagingSonar & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: bins_azimuth
  {
    out << "bins_azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.bins_azimuth, out);
    out << ", ";
  }

  // member: bins_range
  {
    out << "bins_range: ";
    rosidl_generator_traits::value_to_yaml(msg.bins_range, out);
    out << ", ";
  }

  // member: image_azimuth
  {
    if (msg.image_azimuth.size() == 0) {
      out << "image_azimuth: []";
    } else {
      out << "image_azimuth: [";
      size_t pending_items = msg.image_azimuth.size();
      for (auto item : msg.image_azimuth) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: image_range
  {
    if (msg.image_range.size() == 0) {
      out << "image_range: []";
    } else {
      out << "image_range: [";
      size_t pending_items = msg.image_range.size();
      for (auto item : msg.image_range) {
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
  const ImagingSonar & msg,
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

  // member: bins_azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bins_azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.bins_azimuth, out);
    out << "\n";
  }

  // member: bins_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bins_range: ";
    rosidl_generator_traits::value_to_yaml(msg.bins_range, out);
    out << "\n";
  }

  // member: image_azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_azimuth.size() == 0) {
      out << "image_azimuth: []\n";
    } else {
      out << "image_azimuth:\n";
      for (auto item : msg.image_azimuth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: image_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.image_range.size() == 0) {
      out << "image_range: []\n";
    } else {
      out << "image_range:\n";
      for (auto item : msg.image_range) {
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

inline std::string to_yaml(const ImagingSonar & msg, bool use_flow_style = false)
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
  const holoocean_interfaces::msg::ImagingSonar & msg,
  std::ostream & out, size_t indentation = 0)
{
  holoocean_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use holoocean_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const holoocean_interfaces::msg::ImagingSonar & msg)
{
  return holoocean_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<holoocean_interfaces::msg::ImagingSonar>()
{
  return "holoocean_interfaces::msg::ImagingSonar";
}

template<>
inline const char * name<holoocean_interfaces::msg::ImagingSonar>()
{
  return "holoocean_interfaces/msg/ImagingSonar";
}

template<>
struct has_fixed_size<holoocean_interfaces::msg::ImagingSonar>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<holoocean_interfaces::msg::ImagingSonar>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<holoocean_interfaces::msg::ImagingSonar>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__TRAITS_HPP_
