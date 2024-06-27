// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/GPSSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__GPS_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__GPS_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/gps_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_GPSSensor_position
{
public:
  explicit Init_GPSSensor_position(::holoocean_interfaces::msg::GPSSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::GPSSensor position(::holoocean_interfaces::msg::GPSSensor::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::GPSSensor msg_;
};

class Init_GPSSensor_timestamp
{
public:
  Init_GPSSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GPSSensor_position timestamp(::holoocean_interfaces::msg::GPSSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GPSSensor_position(msg_);
  }

private:
  ::holoocean_interfaces::msg::GPSSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::GPSSensor>()
{
  return holoocean_interfaces::msg::builder::Init_GPSSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__GPS_SENSOR__BUILDER_HPP_
