// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/RangeFinderSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/range_finder_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_RangeFinderSensor_angles
{
public:
  explicit Init_RangeFinderSensor_angles(::holoocean_interfaces::msg::RangeFinderSensor & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::RangeFinderSensor angles(::holoocean_interfaces::msg::RangeFinderSensor::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::RangeFinderSensor msg_;
};

class Init_RangeFinderSensor_distances
{
public:
  explicit Init_RangeFinderSensor_distances(::holoocean_interfaces::msg::RangeFinderSensor & msg)
  : msg_(msg)
  {}
  Init_RangeFinderSensor_angles distances(::holoocean_interfaces::msg::RangeFinderSensor::_distances_type arg)
  {
    msg_.distances = std::move(arg);
    return Init_RangeFinderSensor_angles(msg_);
  }

private:
  ::holoocean_interfaces::msg::RangeFinderSensor msg_;
};

class Init_RangeFinderSensor_count
{
public:
  explicit Init_RangeFinderSensor_count(::holoocean_interfaces::msg::RangeFinderSensor & msg)
  : msg_(msg)
  {}
  Init_RangeFinderSensor_distances count(::holoocean_interfaces::msg::RangeFinderSensor::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_RangeFinderSensor_distances(msg_);
  }

private:
  ::holoocean_interfaces::msg::RangeFinderSensor msg_;
};

class Init_RangeFinderSensor_timestamp
{
public:
  Init_RangeFinderSensor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeFinderSensor_count timestamp(::holoocean_interfaces::msg::RangeFinderSensor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RangeFinderSensor_count(msg_);
  }

private:
  ::holoocean_interfaces::msg::RangeFinderSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::RangeFinderSensor>()
{
  return holoocean_interfaces::msg::builder::Init_RangeFinderSensor_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__BUILDER_HPP_
