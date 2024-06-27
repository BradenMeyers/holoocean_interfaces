// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from holoocean_interfaces:msg/IMUSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__TRAITS_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "holoocean_interfaces/msg/detail/imu_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace holoocean_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const IMUSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: acceleration
  {
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []";
    } else {
      out << "acceleration: [";
      size_t pending_items = msg.acceleration.size();
      for (auto item : msg.acceleration) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_velocity
  {
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []";
    } else {
      out << "angular_velocity: [";
      size_t pending_items = msg.angular_velocity.size();
      for (auto item : msg.angular_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_bias
  {
    if (msg.acceleration_bias.size() == 0) {
      out << "acceleration_bias: []";
    } else {
      out << "acceleration_bias: [";
      size_t pending_items = msg.acceleration_bias.size();
      for (auto item : msg.acceleration_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_velocity_bias
  {
    if (msg.angular_velocity_bias.size() == 0) {
      out << "angular_velocity_bias: []";
    } else {
      out << "angular_velocity_bias: [";
      size_t pending_items = msg.angular_velocity_bias.size();
      for (auto item : msg.angular_velocity_bias) {
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
  const IMUSensor & msg,
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

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration.size() == 0) {
      out << "acceleration: []\n";
    } else {
      out << "acceleration:\n";
      for (auto item : msg.acceleration) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []\n";
    } else {
      out << "angular_velocity:\n";
      for (auto item : msg.angular_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration_bias.size() == 0) {
      out << "acceleration_bias: []\n";
    } else {
      out << "acceleration_bias:\n";
      for (auto item : msg.acceleration_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_velocity_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_velocity_bias.size() == 0) {
      out << "angular_velocity_bias: []\n";
    } else {
      out << "angular_velocity_bias:\n";
      for (auto item : msg.angular_velocity_bias) {
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

inline std::string to_yaml(const IMUSensor & msg, bool use_flow_style = false)
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
  const holoocean_interfaces::msg::IMUSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  holoocean_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use holoocean_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const holoocean_interfaces::msg::IMUSensor & msg)
{
  return holoocean_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<holoocean_interfaces::msg::IMUSensor>()
{
  return "holoocean_interfaces::msg::IMUSensor";
}

template<>
inline const char * name<holoocean_interfaces::msg::IMUSensor>()
{
  return "holoocean_interfaces/msg/IMUSensor";
}

template<>
struct has_fixed_size<holoocean_interfaces::msg::IMUSensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<holoocean_interfaces::msg::IMUSensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<holoocean_interfaces::msg::IMUSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMU_SENSOR__TRAITS_HPP_
