#ifndef VescData_h
#define VescData_h

#include "Arduino.h"

enum ReasonType 
{
  BOARD_STOPPED,
  BOARD_MOVING,
  FIRST_PACKET,
  LAST_WILL,
  REQUESTED,
  VESC_OFFLINE,
  MISSED_PACKET,
};

enum PacketType
{
  NORMAL,
};

class VescData
{
  public:

    float batteryVoltage;
    bool moving;
    float ampHours;
    float odometer; // in kilometers
    bool vescOnline;
    unsigned long id;
    ReasonType reason;
};

class ControllerData
{
  public:
    uint8_t throttle;
    unsigned long id;
    uint8_t command;
};

class ControllerConfig
{
  public:
    uint16_t send_interval;
};

#define COMMAND_REQUEST_UPDATE  1

#endif
