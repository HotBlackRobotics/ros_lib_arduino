#ifndef _ROS_hb_core_msgs_Velocity2D_h
#define _ROS_hb_core_msgs_Velocity2D_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hb_core_msgs
{

  class Velocity2D : public ros::Msg
  {
    public:
      typedef int16_t _linear_type;
      _linear_type linear;
      typedef int16_t _angular_type;
      _angular_type angular;

    Velocity2D():
      linear(0),
      angular(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_linear;
      u_linear.real = this->linear;
      *(outbuffer + offset + 0) = (u_linear.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_linear.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->linear);
      union {
        int16_t real;
        uint16_t base;
      } u_angular;
      u_angular.real = this->angular;
      *(outbuffer + offset + 0) = (u_angular.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angular.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->angular);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_linear;
      u_linear.base = 0;
      u_linear.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_linear.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->linear = u_linear.real;
      offset += sizeof(this->linear);
      union {
        int16_t real;
        uint16_t base;
      } u_angular;
      u_angular.base = 0;
      u_angular.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angular.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->angular = u_angular.real;
      offset += sizeof(this->angular);
     return offset;
    }

    const char * getType(){ return "hb_core_msgs/Velocity2D"; };
    const char * getMD5(){ return "51fd6b987aa2eb4fc97aebca8aaf424e"; };

  };

}
#endif