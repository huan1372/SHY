#include "SHYPower.h"
SHYPower pwr;
void setup() {
  pwr.begin();
}

void loop() {
  bool chrgStatus = pwr.isCharging();
  pwr.getBatteryVoltage();
}
