#include "MQ135.h"

#define RL_VALUE 10.0  // Load resistance in kilo ohms
#define RO_CLEAN_AIR_FACTOR 9.83  // RO value in clean air

MQ135::MQ135(uint8_t pin) {
  _pin = pin;
}

float MQ135::getResistance() {
  int adcValue = analogRead(_pin);
  return ((1023.0 / (float)adcValue) - 1.0) * RL_VALUE;
}

float MQ135::getRZero() {
  return getResistance() / RO_CLEAN_AIR_FACTOR;
}

float MQ135::getCorrectedRZero(float temperature, float humidity) {
  return getResistance() / RO_CLEAN_AIR_FACTOR * exp((temperature - 20.0) / 10.0 + (humidity - 65.0) / 10.0);
}

float MQ135::getPPM() {
  return 116.6020682 * pow((getResistance() / getRZero()), -2.769034857);
}

float MQ135::getCorrectedPPM(float temperature, float humidity) {
  return 116.6020682 * pow((getResistance() / getCorrectedRZero(temperature, humidity)), -2.769034857);
}
