char valuenew;
void setup() {
Serial.begin(9600);
 
}

void loop() { 
//   Serial.write("HELLO\n");
   while(Serial.available()>0)
 { 
  valuenew=Serial.read();
  Serial.print(valuenew);
}

}
