#ifndef MQ135_H
#define MQ135_H

#include "Arduino.h"

class MQ135 {
  private:
    uint8_t _pin;

  public:
    MQ135(uint8_t pin);
    float getPPM();
    float getResistance();
    float getRZero();
    float getCorrectedRZero(float temperature, float humidity);
    float getCorrectedPPM(float temperature, float humidity);
};

#endif
