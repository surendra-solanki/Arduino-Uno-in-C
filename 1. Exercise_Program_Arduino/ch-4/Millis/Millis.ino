void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0)
 {
  Serial.println(millis());
  delay(1000);
  }
}
