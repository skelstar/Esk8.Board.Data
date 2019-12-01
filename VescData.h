#ifndef VescData_h
#define VescData_h

#include "Arduino.h"

class VescData
{
  public:
    float batteryVoltage;
    bool moving;
    float ampHours;
    float odometer; // in kilometers
    bool vescOnline;
    unsigned long id;
};

class ControllerData
{
  public:
    uint8_t throttle;
};

#endif
