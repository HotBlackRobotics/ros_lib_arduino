#ifndef _ROS_hb_core_msgs_RobotStatus_h
#define _ROS_hb_core_msgs_RobotStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hb_core_msgs
{

  class RobotStatus : public ros::Msg
  {
    public:
      typedef int16_t _current_dx_type;
      _current_dx_type current_dx;
      typedef int16_t _current_sx_type;
      _current_sx_type current_sx;
      typedef int16_t _distance_type;
      _distance_type distance;
      typedef int16_t _temperature_type;
      _temperature_type temperature;
      typedef int16_t _lux_type;
      _lux_type lux;
      typedef int16_t _battery_current_type;
      _battery_current_type battery_current;
      typedef int16_t _battery_voltage_type;
      _battery_voltage_type battery_voltage;

    RobotStatus():
      current_dx(0),
      current_sx(0),
      distance(0),
      temperature(0),
      lux(0),
      battery_current(0),
      battery_voltage(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_current_dx;
      u_current_dx.real = this->current_dx;
      *(outbuffer + offset + 0) = (u_current_dx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_dx.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->current_dx);
      union {
        int16_t real;
        uint16_t base;
      } u_current_sx;
      u_current_sx.real = this->current_sx;
      *(outbuffer + offset + 0) = (u_current_sx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_sx.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->current_sx);
      union {
        int16_t real;
        uint16_t base;
      } u_distance;
      u_distance.real = this->distance;
      *(outbuffer + offset + 0) = (u_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distance.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->distance);
      union {
        int16_t real;
        uint16_t base;
      } u_temperature;
      u_temperature.real = this->temperature;
      *(outbuffer + offset + 0) = (u_temperature.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temperature.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->temperature);
      union {
        int16_t real;
        uint16_t base;
      } u_lux;
      u_lux.real = this->lux;
      *(outbuffer + offset + 0) = (u_lux.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lux.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->lux);
      union {
        int16_t real;
        uint16_t base;
      } u_battery_current;
      u_battery_current.real = this->battery_current;
      *(outbuffer + offset + 0) = (u_battery_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_current.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->battery_current);
      union {
        int16_t real;
        uint16_t base;
      } u_battery_voltage;
      u_battery_voltage.real = this->battery_voltage;
      *(outbuffer + offset + 0) = (u_battery_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_battery_voltage.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->battery_voltage);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int16_t real;
        uint16_t base;
      } u_current_dx;
      u_current_dx.base = 0;
      u_current_dx.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current_dx.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->current_dx = u_current_dx.real;
      offset += sizeof(this->current_dx);
      union {
        int16_t real;
        uint16_t base;
      } u_current_sx;
      u_current_sx.base = 0;
      u_current_sx.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current_sx.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->current_sx = u_current_sx.real;
      offset += sizeof(this->current_sx);
      union {
        int16_t real;
        uint16_t base;
      } u_distance;
      u_distance.base = 0;
      u_distance.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_distance.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->distance = u_distance.real;
      offset += sizeof(this->distance);
      union {
        int16_t real;
        uint16_t base;
      } u_temperature;
      u_temperature.base = 0;
      u_temperature.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temperature.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->temperature = u_temperature.real;
      offset += sizeof(this->temperature);
      union {
        int16_t real;
        uint16_t base;
      } u_lux;
      u_lux.base = 0;
      u_lux.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_lux.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->lux = u_lux.real;
      offset += sizeof(this->lux);
      union {
        int16_t real;
        uint16_t base;
      } u_battery_current;
      u_battery_current.base = 0;
      u_battery_current.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_current.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->battery_current = u_battery_current.real;
      offset += sizeof(this->battery_current);
      union {
        int16_t real;
        uint16_t base;
      } u_battery_voltage;
      u_battery_voltage.base = 0;
      u_battery_voltage.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_battery_voltage.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->battery_voltage = u_battery_voltage.real;
      offset += sizeof(this->battery_voltage);
     return offset;
    }

    const char * getType(){ return "hb_core_msgs/RobotStatus"; };
    const char * getMD5(){ return "295b409ea6b82880f4e069fc131b2062"; };

  };

}
#endif