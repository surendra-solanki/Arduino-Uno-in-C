#include <Wire.h>

char New;
 void setup() {
  Wire.begin();//Join I2C as a master
//  Wire.onRequest();
  }

void loop()
{  
  Wire.requestFrom(44,6);  //request from controller to peripheral
  while(Wire.available())  //as it like did in slave code for 
  {
    New=Wire.read();
    Serial.println(New);
  }
  delay(500);
}
