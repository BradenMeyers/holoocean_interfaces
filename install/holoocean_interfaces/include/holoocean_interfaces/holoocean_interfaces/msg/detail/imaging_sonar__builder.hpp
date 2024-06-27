// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__BUILDER_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "holoocean_interfaces/msg/detail/imaging_sonar__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace holoocean_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImagingSonar_image_range
{
public:
  explicit Init_ImagingSonar_image_range(::holoocean_interfaces::msg::ImagingSonar & msg)
  : msg_(msg)
  {}
  ::holoocean_interfaces::msg::ImagingSonar image_range(::holoocean_interfaces::msg::ImagingSonar::_image_range_type arg)
  {
    msg_.image_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::holoocean_interfaces::msg::ImagingSonar msg_;
};

class Init_ImagingSonar_image_azimuth
{
public:
  explicit Init_ImagingSonar_image_azimuth(::holoocean_interfaces::msg::ImagingSonar & msg)
  : msg_(msg)
  {}
  Init_ImagingSonar_image_range image_azimuth(::holoocean_interfaces::msg::ImagingSonar::_image_azimuth_type arg)
  {
    msg_.image_azimuth = std::move(arg);
    return Init_ImagingSonar_image_range(msg_);
  }

private:
  ::holoocean_interfaces::msg::ImagingSonar msg_;
};

class Init_ImagingSonar_bins_range
{
public:
  explicit Init_ImagingSonar_bins_range(::holoocean_interfaces::msg::ImagingSonar & msg)
  : msg_(msg)
  {}
  Init_ImagingSonar_image_azimuth bins_range(::holoocean_interfaces::msg::ImagingSonar::_bins_range_type arg)
  {
    msg_.bins_range = std::move(arg);
    return Init_ImagingSonar_image_azimuth(msg_);
  }

private:
  ::holoocean_interfaces::msg::ImagingSonar msg_;
};

class Init_ImagingSonar_bins_azimuth
{
public:
  explicit Init_ImagingSonar_bins_azimuth(::holoocean_interfaces::msg::ImagingSonar & msg)
  : msg_(msg)
  {}
  Init_ImagingSonar_bins_range bins_azimuth(::holoocean_interfaces::msg::ImagingSonar::_bins_azimuth_type arg)
  {
    msg_.bins_azimuth = std::move(arg);
    return Init_ImagingSonar_bins_range(msg_);
  }

private:
  ::holoocean_interfaces::msg::ImagingSonar msg_;
};

class Init_ImagingSonar_timestamp
{
public:
  Init_ImagingSonar_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImagingSonar_bins_azimuth timestamp(::holoocean_interfaces::msg::ImagingSonar::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ImagingSonar_bins_azimuth(msg_);
  }

private:
  ::holoocean_interfaces::msg::ImagingSonar msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::holoocean_interfaces::msg::ImagingSonar>()
{
  return holoocean_interfaces::msg::builder::Init_ImagingSonar_timestamp();
}

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__BUILDER_HPP_
