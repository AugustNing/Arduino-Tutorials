int power_pin = 3;
int volt_pin = 0;
int piezo_pin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(power_pin, OUTPUT);
  digitalWrite(power_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int read_val = analogRead(volt_pin);
  Serial.println(read_val);
  delay(100);
}


