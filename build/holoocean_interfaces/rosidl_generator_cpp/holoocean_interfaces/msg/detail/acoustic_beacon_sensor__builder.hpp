// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/AcousticBeaconSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/acoustic_beacon_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_AcousticBeaconSensor_z
{
public:
  explicit Init_AcousticBeaconSensor_z(::holoocean_interfaces::msg::AcousticBeaconSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::AcousticBeaconSensor z(::holoocean_interfaces::msg::AcousticBeaconSensor::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::AcousticBeaconSensor msg_;
};

class Init_AcousticBeaconSensor_range
{
public:
  explicit Init_AcousticBeaconSensor_range(::holoocean_interfaces::msg::AcousticBeaconSensor & msg)
  : msg_(msg)
  {}
  Init_AcousticBeaconSensor_z range(::holoocean_interfaces::msg::AcousticBeaconSensor::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_AcousticBeaconSensor_z(msg_);
  }

private:
  ::holoocean_interfaces::msg::AcousticBeaconSensor msg_;
};

class Init_AcousticBeaconSensor_elevation
{
public:
  explicit Init_AcousticBeaconSensor_elevation(::holoocean_interfaces::msg::AcousticBeaconSensor & msg)
  : msg_(msg)
  {}
  Init_AcousticBeaconSensor_range elevation(::holoocean_interfaces::msg::AcousticBeaconSensor::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_AcousticBeaconSensor_range(msg_);
  }

private:
  ::holoocean_interfaces::msg::AcousticBeaconSensor msg_;
};

class Init_AcousticBeaconSensor_azimuth
{
public:
  explicit Init_AcousticBeaconSensor_azimuth(::holoocean_interfaces::msg::AcousticBeaconSensor & msg)
  : msg_(msg)
  {}
  Init_AcousticBeaconSensor_elevation azimuth(::holoocean_interfaces::msg::AcousticBeaconSensor::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_AcousticBeaconSensor_elevation(msg_);
  }

private:
  ::holoocean_interfaces::msg::AcousticBeaconSensor msg_;
};

class Init_AcousticBeaconSensor_from_beacon
{
public:
  explicit Init_AcousticBeaconSensor_from_beacon(::holoocean_interfaces::msg::AcousticBeaconSensor & msg)
  : msg_(msg)
  {}
  Init_AcousticBeaconSensor_azimuth from_beacon(::holoocean_interfaces::msg::AcousticBeaconSensor::_from_beacon_type arg)
  {
    msg_.from_beacon = std::move(arg);
    return Init_AcousticBeaconSensor_azimuth(msg_);
  }

private:
  ::holoocean_interfaces::msg::AcousticBeaconSensor msg_;
};

class Init_AcousticBeaconSensor_msg_type
{
public:
  explicit Init_AcousticBeaconSensor_msg_type(::holoocean_interfaces::msg::AcousticBeaconSensor & msg)
  : msg_(msg)
  {}
  Init_AcousticBeaconSensor_from_beacon msg_type(::holoocean_interfaces::msg::AcousticBeaconSensor::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return Init_AcousticBeaconSensor_from_beacon(msg_);
  }

private:
  ::holoocean_interfaces::msg::AcousticBeaconSensor msg_;
};

class Init_AcousticBeaconSensor_timestamp
{
public:
  Init_AcousticBeaconSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcousticBeaconSensor_msg_type timestamp(::holoocean_interfaces::msg::AcousticBeaconSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_AcousticBeaconSensor_msg_type(msg_);
  }

private:
  ::holoocean_interfaces::msg::AcousticBeaconSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::AcousticBeaconSensor>()
{
  return holoocean_interfaces::msg::builder::Init_AcousticBeaconSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__BUILDER_HPP_
