int LED_pin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 256; i++) {
    analogWrite(LED_pin, i);
    delay(10);
  }
  for (int i = 256; i >= 0; i--) {
    analogWrite(LED_pin, i);
    delay(10);
  }
}



