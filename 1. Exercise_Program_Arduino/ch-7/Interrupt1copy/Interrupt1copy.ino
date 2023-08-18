
void setup() {
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
}
void loop() {
 digitalWrite(2,HIGH);
 delay(1500);
 digitalWrite(2,LOW);
 delay(1500);
 attachInterrupt(digitalPinToInterrupt(3), blinkLed, RISING);
}
void blinkLed() {
  digitalWrite(7,HIGH);
  delay(1500);
  digitalWrite(7,LOW);
  delay(1500);
  
}
