#include <Wire.h>

char New;
 void setup() {
  Wire.begin();//Join I2C as a master
  Serial.begin(9600); 
  }

void loop()
{  
  Wire.beginTransmission(40);   //Tx to device number 44(0x2C)
  Wire.write("Surendra# ");      //Send value in byte
  Wire.endTransmission();       //Stop Tx
  delay(500);
  
  Wire.requestFrom(40,20);  //request from controller to peripheral
  while(Wire.available())  //as it like did in slave code for 
  {
    New=Wire.read();
    Serial.print(New);
  }
  delay(500);
}
