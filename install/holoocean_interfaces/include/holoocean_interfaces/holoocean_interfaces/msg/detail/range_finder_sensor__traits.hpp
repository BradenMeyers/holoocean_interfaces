// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from holoocean_interfaces:msg/RangeFinderSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__TRAITS_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "holoocean_interfaces/msg/detail/range_finder_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace holoocean_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RangeFinderSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: distances
  {
    if (msg.distances.size() == 0) {
      out << "distances: []";
    } else {
      out << "distances: [";
      size_t pending_items = msg.distances.size();
      for (auto item : msg.distances) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
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
  const RangeFinderSensor & msg,
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

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: distances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.distances.size() == 0) {
      out << "distances: []\n";
    } else {
      out << "distances:\n";
      for (auto item : msg.distances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
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

inline std::string to_yaml(const RangeFinderSensor & msg, bool use_flow_style = false)
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
  const holoocean_interfaces::msg::RangeFinderSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  holoocean_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use holoocean_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const holoocean_interfaces::msg::RangeFinderSensor & msg)
{
  return holoocean_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<holoocean_interfaces::msg::RangeFinderSensor>()
{
  return "holoocean_interfaces::msg::RangeFinderSensor";
}

template<>
inline const char * name<holoocean_interfaces::msg::RangeFinderSensor>()
{
  return "holoocean_interfaces/msg/RangeFinderSensor";
}

template<>
struct has_fixed_size<holoocean_interfaces::msg::RangeFinderSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<holoocean_interfaces::msg::RangeFinderSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<holoocean_interfaces::msg::RangeFinderSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__TRAITS_HPP_
