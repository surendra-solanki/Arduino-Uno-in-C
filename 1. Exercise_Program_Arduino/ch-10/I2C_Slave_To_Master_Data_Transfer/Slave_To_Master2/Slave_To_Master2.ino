#include<Wire.h>
char valueNew; 

void setup() {
Wire.begin(44);
Serial.begin(9600);
Wire.onRequest(requestEvent);
}

void loop() {

//  Wire.beginTransmission(44);  
//  Wire.write("Solanki S ");
//  Wire.endTransmission();
//  delay(500);
  
}

void requestEvent()
{
  Wire.write("hello ");
}
