#include<Wire.h>
char valueNew; 

void setup() {
Wire.begin(0x40);   //join I2C as a slave
//Wire.begin(9999);
Serial.begin(9600);
Wire.onReceive(Fun);
Wire.onRequest(requestEvent);
}

void loop() {
  
}

void Fun()
{
  while(Wire.available())
 {
  valueNew=Wire.read();
  Serial.print(valueNew); 
 }
// delay(500); 
}

void requestEvent()
{
  Wire.write("abcdefghijklmnopqrstuvwxyz\n");
  delay(500);
}
