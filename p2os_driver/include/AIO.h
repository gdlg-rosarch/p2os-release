/* Auto-generated by genmsg_cpp for file /home/rosbuild/hudson/workspace/doc-electric-p2os/doc_stacks/2013-03-01_16-19-23.450784/p2os/p2os_driver/msg/AIO.msg */
#ifndef P2OS_DRIVER_MESSAGE_AIO_H
#define P2OS_DRIVER_MESSAGE_AIO_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace p2os_driver
{
template <class ContainerAllocator>
struct AIO_ {
  typedef AIO_<ContainerAllocator> Type;

  AIO_()
  : voltages_count(0)
  , voltages()
  {
  }

  AIO_(const ContainerAllocator& _alloc)
  : voltages_count(0)
  , voltages(_alloc)
  {
  }

  typedef uint8_t _voltages_count_type;
  uint8_t voltages_count;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _voltages_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  voltages;


  ROS_DEPRECATED uint32_t get_voltages_size() const { return (uint32_t)voltages.size(); }
  ROS_DEPRECATED void set_voltages_size(uint32_t size) { voltages.resize((size_t)size); }
  ROS_DEPRECATED void get_voltages_vec(std::vector<float, typename ContainerAllocator::template rebind<float>::other > & vec) const { vec = this->voltages; }
  ROS_DEPRECATED void set_voltages_vec(const std::vector<float, typename ContainerAllocator::template rebind<float>::other > & vec) { this->voltages = vec; }
private:
  static const char* __s_getDataType_() { return "p2os_driver/AIO"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "80e4ca5770a3db29064af246946ff4fe"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "uint8 voltages_count\n\
float32[] voltages\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, voltages_count);
    ros::serialization::serialize(stream, voltages);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, voltages_count);
    ros::serialization::deserialize(stream, voltages);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(voltages_count);
    size += ros::serialization::serializationLength(voltages);
    return size;
  }

  typedef boost::shared_ptr< ::p2os_driver::AIO_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p2os_driver::AIO_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AIO
typedef  ::p2os_driver::AIO_<std::allocator<void> > AIO;

typedef boost::shared_ptr< ::p2os_driver::AIO> AIOPtr;
typedef boost::shared_ptr< ::p2os_driver::AIO const> AIOConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::p2os_driver::AIO_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::p2os_driver::AIO_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace p2os_driver

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::p2os_driver::AIO_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::p2os_driver::AIO_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::p2os_driver::AIO_<ContainerAllocator> > {
  static const char* value() 
  {
    return "80e4ca5770a3db29064af246946ff4fe";
  }

  static const char* value(const  ::p2os_driver::AIO_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x80e4ca5770a3db29ULL;
  static const uint64_t static_value2 = 0x064af246946ff4feULL;
};

template<class ContainerAllocator>
struct DataType< ::p2os_driver::AIO_<ContainerAllocator> > {
  static const char* value() 
  {
    return "p2os_driver/AIO";
  }

  static const char* value(const  ::p2os_driver::AIO_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::p2os_driver::AIO_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 voltages_count\n\
float32[] voltages\n\
\n\
";
  }

  static const char* value(const  ::p2os_driver::AIO_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::p2os_driver::AIO_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.voltages_count);
    stream.next(m.voltages);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AIO_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p2os_driver::AIO_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::p2os_driver::AIO_<ContainerAllocator> & v) 
  {
    s << indent << "voltages_count: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.voltages_count);
    s << indent << "voltages[]" << std::endl;
    for (size_t i = 0; i < v.voltages.size(); ++i)
    {
      s << indent << "  voltages[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.voltages[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // P2OS_DRIVER_MESSAGE_AIO_H
