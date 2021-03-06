/* Auto-generated by genmsg_cpp for file /home/armuser/ros/rosbuild_src/owd/srv/CalibrateJoints.srv */
#ifndef OWD_SERVICE_CALIBRATEJOINTS_H
#define OWD_SERVICE_CALIBRATEJOINTS_H
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

#include "ros/service_traits.h"




namespace owd
{
template <class ContainerAllocator>
struct CalibrateJointsRequest_ {
  typedef CalibrateJointsRequest_<ContainerAllocator> Type;

  CalibrateJointsRequest_()
  {
  }

  CalibrateJointsRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::owd::CalibrateJointsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd::CalibrateJointsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateJointsRequest
typedef  ::owd::CalibrateJointsRequest_<std::allocator<void> > CalibrateJointsRequest;

typedef boost::shared_ptr< ::owd::CalibrateJointsRequest> CalibrateJointsRequestPtr;
typedef boost::shared_ptr< ::owd::CalibrateJointsRequest const> CalibrateJointsRequestConstPtr;



template <class ContainerAllocator>
struct CalibrateJointsResponse_ {
  typedef CalibrateJointsResponse_<ContainerAllocator> Type;

  CalibrateJointsResponse_()
  {
  }

  CalibrateJointsResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::owd::CalibrateJointsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::owd::CalibrateJointsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CalibrateJointsResponse
typedef  ::owd::CalibrateJointsResponse_<std::allocator<void> > CalibrateJointsResponse;

typedef boost::shared_ptr< ::owd::CalibrateJointsResponse> CalibrateJointsResponsePtr;
typedef boost::shared_ptr< ::owd::CalibrateJointsResponse const> CalibrateJointsResponseConstPtr;


struct CalibrateJoints
{

typedef CalibrateJointsRequest Request;
typedef CalibrateJointsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct CalibrateJoints
} // namespace owd

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd::CalibrateJointsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd::CalibrateJointsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd::CalibrateJointsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::owd::CalibrateJointsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::owd::CalibrateJointsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd/CalibrateJointsRequest";
  }

  static const char* value(const  ::owd::CalibrateJointsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd::CalibrateJointsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::owd::CalibrateJointsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd::CalibrateJointsRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::owd::CalibrateJointsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::owd::CalibrateJointsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::owd::CalibrateJointsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::owd::CalibrateJointsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::owd::CalibrateJointsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd/CalibrateJointsResponse";
  }

  static const char* value(const  ::owd::CalibrateJointsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::owd::CalibrateJointsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
";
  }

  static const char* value(const  ::owd::CalibrateJointsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::owd::CalibrateJointsResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd::CalibrateJointsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateJointsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::owd::CalibrateJointsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CalibrateJointsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<owd::CalibrateJoints> {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const owd::CalibrateJoints&) { return value(); } 
};

template<>
struct DataType<owd::CalibrateJoints> {
  static const char* value() 
  {
    return "owd/CalibrateJoints";
  }

  static const char* value(const owd::CalibrateJoints&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd::CalibrateJointsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const owd::CalibrateJointsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd::CalibrateJointsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd/CalibrateJoints";
  }

  static const char* value(const owd::CalibrateJointsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<owd::CalibrateJointsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const owd::CalibrateJointsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<owd::CalibrateJointsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "owd/CalibrateJoints";
  }

  static const char* value(const owd::CalibrateJointsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // OWD_SERVICE_CALIBRATEJOINTS_H

