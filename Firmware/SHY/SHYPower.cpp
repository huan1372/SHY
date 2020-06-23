#include "SHYPower.h"
#include <stdint.h>
const uint8_t chrgPin = 27;
const uint8_t gpsPwrPin = 2;
const uint8_t battPin = A4;
const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;

/*
 * int - most Arduino noards define 2-bytes, but some actually do 4 bytes
 * float -decimals 
 * double - decimals; more precise than float
 * 
 * uint8_t - unsigned 8 bit integer[0-255]
 * uint16_t - unsigned 16 bit integer[0-65355]
 * int8_t - signed 8 bit integer[-127-127]
 * int16_t -signed 16 bit intger [-32768,32768]
 * 
 */
SHYPower::SHYPower(){
  
}

void SHYPower::begin(){
  pinMode(chrgPin,INPUT);
  pinMode(gpsPwrPin,OUTPUT);
}

//Returns whether or not the battery is charging
bool SHYPower::isCharging(){
  return !digitalRead(chrgPin); //return 1 if charging, 0 not charging
}

uint16_t SHYPower::getBatteryVoltage(){
  uint16_t vol = analogRead(battPin);
  //10-bit ADC, will return 0(0V) - 1023(3.3V)
  uint16_t voltage = VDD * (vol/(float)adcResolution);
  return 2*voltage;
}

void SHYPower::enableGPS(){
  digitalWrite(gpsPwrPin,HIGH);
  //enable regulator, turning ON GPS circuit
}
void SHYPower::disableGPS(){
  digitalWrite(gpsPwrPin,LOW);
  //disable regulator, turning OFF GPS circuit
}

void SHYPower::enableMP3(){
  
}
void SHYPower::disableMP3(){
  
}
