// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from holoocean_interfaces:msg/ImagingSonar.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__STRUCT_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__holoocean_interfaces__msg__ImagingSonar __attribute__((deprecated))
#else
# define DEPRECATED__holoocean_interfaces__msg__ImagingSonar __declspec(deprecated)
#endif

namespace holoocean_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImagingSonar_
{
  using Type = ImagingSonar_<ContainerAllocator>;

  explicit ImagingSonar_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->bins_azimuth = 0l;
      this->bins_range = 0l;
    }
  }

  explicit ImagingSonar_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->bins_azimuth = 0l;
      this->bins_range = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _bins_azimuth_type =
    int32_t;
  _bins_azimuth_type bins_azimuth;
  using _bins_range_type =
    int32_t;
  _bins_range_type bins_range;
  using _image_azimuth_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _image_azimuth_type image_azimuth;
  using _image_range_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _image_range_type image_range;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__bins_azimuth(
    const int32_t & _arg)
  {
    this->bins_azimuth = _arg;
    return *this;
  }
  Type & set__bins_range(
    const int32_t & _arg)
  {
    this->bins_range = _arg;
    return *this;
  }
  Type & set__image_azimuth(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->image_azimuth = _arg;
    return *this;
  }
  Type & set__image_range(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->image_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator> *;
  using ConstRawPtr =
    const holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__holoocean_interfaces__msg__ImagingSonar
    std::shared_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__holoocean_interfaces__msg__ImagingSonar
    std::shared_ptr<holoocean_interfaces::msg::ImagingSonar_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImagingSonar_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->bins_azimuth != other.bins_azimuth) {
      return false;
    }
    if (this->bins_range != other.bins_range) {
      return false;
    }
    if (this->image_azimuth != other.image_azimuth) {
      return false;
    }
    if (this->image_range != other.image_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImagingSonar_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImagingSonar_

// alias to use template instance with default allocator
using ImagingSonar =
  holoocean_interfaces::msg::ImagingSonar_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__IMAGING_SONAR__STRUCT_HPP_
