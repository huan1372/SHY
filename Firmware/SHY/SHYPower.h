#ifndef SHYPower_h   
#define SHYPower_h
#include <Arduino.h>
class  SHYPower  
{
  private :

  public :
  bool  isCharging();
  uint16_t   getBatteryVoltage();
};
