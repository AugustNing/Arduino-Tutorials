#include <Servo.h>

  int servo_pin = 3;
  Servo s;
  int count = 0;
  
void setup() {
  s.attach(servo_pin);
  s.write(0);
  randomSeed(analogRead(2));
}

void loop() {
  int randhold = random(60);
  count += randhold;
  
  if (count > 180) {
    count %= 180;
  }
  s.write(count);
  delay(500);
}


