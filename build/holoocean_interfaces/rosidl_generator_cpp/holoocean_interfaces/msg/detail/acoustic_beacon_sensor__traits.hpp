// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from holoocean_interfaces:msg/AcousticBeaconSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__TRAITS_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace holoocean_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const AcousticBeaconSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: msg_type
  {
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << ", ";
  }

  // member: from_beacon
  {
    out << "from_beacon: ";
    rosidl_generator_traits::value_to_yaml(msg.from_beacon, out);
    out << ", ";
  }

  // member: azimuth
  {
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AcousticBeaconSensor & msg,
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

  // member: msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << "\n";
  }

  // member: from_beacon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_beacon: ";
    rosidl_generator_traits::value_to_yaml(msg.from_beacon, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    rosidl_generator_traits::value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AcousticBeaconSensor & msg, bool use_flow_style = false)
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
  const holoocean_interfaces::msg::AcousticBeaconSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  holoocean_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use holoocean_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const holoocean_interfaces::msg::AcousticBeaconSensor & msg)
{
  return holoocean_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<holoocean_interfaces::msg::AcousticBeaconSensor>()
{
  return "holoocean_interfaces::msg::AcousticBeaconSensor";
}

template<>
inline const char * name<holoocean_interfaces::msg::AcousticBeaconSensor>()
{
  return "holoocean_interfaces/msg/AcousticBeaconSensor";
}

template<>
struct has_fixed_size<holoocean_interfaces::msg::AcousticBeaconSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<holoocean_interfaces::msg::AcousticBeaconSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<holoocean_interfaces::msg::AcousticBeaconSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__TRAITS_HPP_
