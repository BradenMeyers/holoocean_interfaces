// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from holoocean_interfaces:msg/RangeFinderSensor.idl
// generated code does not contain a copyright notice

#ifndef HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__STRUCT_HPP_
#define HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__holoocean_interfaces__msg__RangeFinderSensor __attribute__((deprecated))
#else
# define DEPRECATED__holoocean_interfaces__msg__RangeFinderSensor __declspec(deprecated)
#endif

namespace holoocean_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangeFinderSensor_
{
  using Type = RangeFinderSensor_<ContainerAllocator>;

  explicit RangeFinderSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->count = 0l;
    }
  }

  explicit RangeFinderSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ll;
      this->count = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    int64_t;
  _timestamp_type timestamp;
  using _count_type =
    int32_t;
  _count_type count;
  using _distances_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _distances_type distances;
  using _angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__timestamp(
    const int64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__count(
    const int32_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__distances(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->distances = _arg;
    return *this;
  }
  Type & set__angles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__holoocean_interfaces__msg__RangeFinderSensor
    std::shared_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__holoocean_interfaces__msg__RangeFinderSensor
    std::shared_ptr<holoocean_interfaces::msg::RangeFinderSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangeFinderSensor_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->distances != other.distances) {
      return false;
    }
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const RangeFinderSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangeFinderSensor_

// alias to use template instance with default allocator
using RangeFinderSensor =
  holoocean_interfaces::msg::RangeFinderSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace holoocean_interfaces

#endif  // HOLOOCEAN_INTERFACES__MSG__DETAIL__RANGE_FINDER_SENSOR__STRUCT_HPP_
