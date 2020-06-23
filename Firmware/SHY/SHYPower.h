/*
 * Description
 * 
 */
#ifndef SHYPower_h   
#define SHYPower_h
#include <Arduino.h>

class  SHYPower  
{
  private :

  public :
  SHYPower();
  void begin();
  
  bool  isCharging();
  uint16_t   getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
  
};
#endif
