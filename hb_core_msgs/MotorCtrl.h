#ifndef _ROS_hb_core_msgs_MotorCtrl_h
#define _ROS_hb_core_msgs_MotorCtrl_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hb_core_msgs
{

  class MotorCtrl : public ros::Msg
  {
    public:
      typedef int16_t _dx_type;
      _dx_type dx;
      typedef int16_t _sx_type;
      _sx_type sx;

    MotorCtrl():
      dx(0),
      sx(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_dx;
      u_dx.real = this->dx;
      *(outbuffer + offset + 0) = (u_dx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dx.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->dx);
      union {
        int16_t real;
        uint16_t base;
      } u_sx;
      u_sx.real = this->sx;
      *(outbuffer + offset + 0) = (u_sx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sx.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->sx);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_dx;
      u_dx.base = 0;
      u_dx.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dx.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->dx = u_dx.real;
      offset += sizeof(this->dx);
      union {
        int16_t real;
        uint16_t base;
      } u_sx;
      u_sx.base = 0;
      u_sx.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sx.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->sx = u_sx.real;
      offset += sizeof(this->sx);
     return offset;
    }

    const char * getType(){ return "hb_core_msgs/MotorCtrl"; };
    const char * getMD5(){ return "bfb9713b70ae1944c986feef1f82bcf6"; };

  };

}
#endif