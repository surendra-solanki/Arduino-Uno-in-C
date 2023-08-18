void setup() {
  Serial.begin(9600);
}

void loop() {
 while(Serial.available()>0)
 {
  Serial.print("Hello World\t");
  delayMicroseconds(1000000);  ///limitation is 16383 for accurate delay
  //delay(1000);
 }
}
