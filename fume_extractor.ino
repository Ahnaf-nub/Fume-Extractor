/*#include <ESP32Servo.h>
#include <MQ135.h>

#define relay 8
int pos = 0;
ESP32Servo servo;

void setup() {
  servo.attach(10);
  pinMode(relay, OUTPUT);
}

void loop() {
  if (ppm > 500) {
    digitalWrite(relay, HIGH);
    sweep();
  } else {
    digitalWrite(relay, LOW);
  }
}

void sweep {
  for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(10);
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }
}*/
