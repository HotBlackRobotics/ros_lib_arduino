#ifndef _ROS_hb_core_msgs_ServoMotorCtrl_h
#define _ROS_hb_core_msgs_ServoMotorCtrl_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hb_core_msgs
{

  class ServoMotorCtrl : public ros::Msg
  {
    public:
      typedef uint8_t _servo1_type;
      _servo1_type servo1;
      typedef uint8_t _servo2_type;
      _servo2_type servo2;
      typedef uint8_t _servo3_type;
      _servo3_type servo3;
      typedef uint8_t _servo4_type;
      _servo4_type servo4;
      typedef uint8_t _servo5_type;
      _servo5_type servo5;
      typedef uint8_t _servo6_type;
      _servo6_type servo6;

    ServoMotorCtrl():
      servo1(0),
      servo2(0),
      servo3(0),
      servo4(0),
      servo5(0),
      servo6(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->servo1 >> (8 * 0)) & 0xFF;
      offset += sizeof(this->servo1);
      *(outbuffer + offset + 0) = (this->servo2 >> (8 * 0)) & 0xFF;
      offset += sizeof(this->servo2);
      *(outbuffer + offset + 0) = (this->servo3 >> (8 * 0)) & 0xFF;
      offset += sizeof(this->servo3);
      *(outbuffer + offset + 0) = (this->servo4 >> (8 * 0)) & 0xFF;
      offset += sizeof(this->servo4);
      *(outbuffer + offset + 0) = (this->servo5 >> (8 * 0)) & 0xFF;
      offset += sizeof(this->servo5);
      *(outbuffer + offset + 0) = (this->servo6 >> (8 * 0)) & 0xFF;
      offset += sizeof(this->servo6);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->servo1 =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->servo1);
      this->servo2 =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->servo2);
      this->servo3 =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->servo3);
      this->servo4 =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->servo4);
      this->servo5 =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->servo5);
      this->servo6 =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->servo6);
     return offset;
    }

    const char * getType(){ return "hb_core_msgs/ServoMotorCtrl"; };
    const char * getMD5(){ return "3f84452edf99937b7faf3069e9db21d5"; };

  };

}
#endif