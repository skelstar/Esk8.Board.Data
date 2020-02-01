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
  CONTROL,
  CONFIG,
};

enum ThrottleMode
{
  ANALOG_TRIGGER_MODE,
  TWO_BUTTON_MODE
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
  bool cruise_control;
  bool accel_pressed;
  bool brake_pressed;
};

class ControllerConfig
{
  public:
    uint16_t send_interval;
    bool cruise_control_enabled;
    unsigned long throttle_smoothing_period;
};

class BoardConfig
{
public:
};

#define COMMAND_REQUEST_UPDATE 1

#endif
