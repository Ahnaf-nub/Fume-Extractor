#include "MQ135.h"

#define ANALOGPIN A0  // Pin where MQ135 is connected

MQ135 mq135_sensor(ANALOGPIN);

void setup() {
  Serial.begin(115200);
  Serial.println("MQ135 Air Quality Sensor Test");
}

void loop() {
  float rzero = mq135_sensor.getRZero();
  float resistance = mq135_sensor.getResistance();
  float ppm = mq135_sensor.getPPM();
  float correctedPPM = mq135_sensor.getCorrectedPPM(25, 60); // Example: 25°C temperature, 60% humidity

  Serial.print("Sensor Resistance: ");
  Serial.print(resistance);
  Serial.println(" Ohm");

  Serial.print("RZero: ");
  Serial.print(rzero);
  Serial.println(" Ohm");

  Serial.print("CO2 Concentration: ");
  Serial.print(ppm);
  Serial.println(" ppm");

  Serial.print("Corrected CO2 Concentration: ");
  Serial.print(correctedPPM);
  Serial.println(" ppm");

  delay(2000);  // Wait 2 seconds before next reading
}