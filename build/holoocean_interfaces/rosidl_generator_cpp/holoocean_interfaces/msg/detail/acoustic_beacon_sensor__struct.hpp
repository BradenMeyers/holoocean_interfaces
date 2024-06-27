// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from holoocean_interfaces:msg/AcousticBeaconSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__STRUCT_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__holoocean_interfaces__msg__AcousticBeaconSensor __attribute__((deprecated))
#else
# define DEPRECATED__holoocean_interfaces__msg__AcousticBeaconSensor __declspec(deprecated)
#endif

namespace holoocean_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcousticBeaconSensor_
{
  using Type = AcousticBeaconSensor_<ContainerAllocator>;

  explicit AcousticBeaconSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->msg_type = "";
      this->from_beacon = 0l;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->range = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit AcousticBeaconSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->msg_type = "";
      this->from_beacon = 0l;
      this->azimuth = 0.0f;
      this->elevation = 0.0f;
      this->range = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _msg_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type_type msg_type;
  using _from_beacon_type =
    int32_t;
  _from_beacon_type from_beacon;
  using _azimuth_type =
    float;
  _azimuth_type azimuth;
  using _elevation_type =
    float;
  _elevation_type elevation;
  using _range_type =
    float;
  _range_type range;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__msg_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg_type = _arg;
    return *this;
  }
  Type & set__from_beacon(
    const int32_t & _arg)
  {
    this->from_beacon = _arg;
    return *this;
  }
  Type & set__azimuth(
    const float & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__elevation(
    const float & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__holoocean_interfaces__msg__AcousticBeaconSensor
    std::shared_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__holoocean_interfaces__msg__AcousticBeaconSensor
    std::shared_ptr<holoocean_interfaces::msg::AcousticBeaconSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcousticBeaconSensor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->msg_type != other.msg_type) {
      return false;
    }
    if (this->from_beacon != other.from_beacon) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcousticBeaconSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcousticBeaconSensor_

// alias to use template instance with default allocator
using AcousticBeaconSensor =
  holoocean_interfaces::msg::AcousticBeaconSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__ACOUSTIC_BEACON_SENSOR__STRUCT_HPP_
