// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from holoocean_interfaces:msg/VelocitySensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__TRAITS_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "holoocean_interfaces/msg/detail/velocity_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace holoocean_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelocitySensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
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
  const VelocitySensor & msg,
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

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
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

inline std::string to_yaml(const VelocitySensor & msg, bool use_flow_style = false)
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
  const holoocean_interfaces::msg::VelocitySensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  holoocean_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use holoocean_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const holoocean_interfaces::msg::VelocitySensor & msg)
{
  return holoocean_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<holoocean_interfaces::msg::VelocitySensor>()
{
  return "holoocean_interfaces::msg::VelocitySensor";
}

template<>
inline const char * name<holoocean_interfaces::msg::VelocitySensor>()
{
  return "holoocean_interfaces/msg/VelocitySensor";
}

template<>
struct has_fixed_size<holoocean_interfaces::msg::VelocitySensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<holoocean_interfaces::msg::VelocitySensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<holoocean_interfaces::msg::VelocitySensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__VELOCITY_SENSOR__TRAITS_HPP_
