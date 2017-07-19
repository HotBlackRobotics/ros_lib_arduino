#ifndef _ROS_hb_core_msgs_Odom2DExtended_h
#define _ROS_hb_core_msgs_Odom2DExtended_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "hb_core_msgs/Velocity2D.h"
#include "hb_core_msgs/Pose2D.h"

namespace hb_core_msgs
{

  class Odom2DExtended : public ros::Msg
  {
    public:
      typedef uint32_t _time_stamp_type;
      _time_stamp_type time_stamp;
      typedef hb_core_msgs::Velocity2D _velocity_type;
      _velocity_type velocity;
      typedef hb_core_msgs::Pose2D _pose_type;
      _pose_type pose;

    Odom2DExtended():
      time_stamp(0),
      velocity(),
      pose()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->time_stamp >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->time_stamp >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->time_stamp >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->time_stamp >> (8 * 3)) & 0xFF;
      offset += sizeof(this->time_stamp);
      offset += this->velocity.serialize(outbuffer + offset);
      offset += this->pose.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->time_stamp =  ((uint32_t) (*(inbuffer + offset)));
      this->time_stamp |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->time_stamp |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->time_stamp |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->time_stamp);
      offset += this->velocity.deserialize(inbuffer + offset);
      offset += this->pose.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "hb_core_msgs/Odom2DExtended"; };
    const char * getMD5(){ return "830beb884a3d5949d8e4c94af38fff87"; };

  };

}
#endif