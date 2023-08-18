
void setup() {
  pinMode(3,OUTPUT);
}

void loop() {
analogWrite(3,250);
delay(500);
analogWrite(3,200);
delay(400);
analogWrite(3,150);
delay(300);
analogWrite(3,100);
delay(200);
analogWrite(3,50);
delay(100);
analogWrite(3,0);
delay(100);
}
