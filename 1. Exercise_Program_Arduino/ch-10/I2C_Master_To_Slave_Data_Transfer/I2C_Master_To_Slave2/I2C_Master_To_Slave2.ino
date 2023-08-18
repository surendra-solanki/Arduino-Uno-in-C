#include<Wire.h>
char valueNew; 

void setup() {
Wire.begin(24);
Serial.begin(9600);
Wire.onReceive(Fun);
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
 
}
