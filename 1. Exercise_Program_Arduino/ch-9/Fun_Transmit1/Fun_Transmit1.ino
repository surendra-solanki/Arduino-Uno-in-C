#include <Wire.h>

char New;  //Simple I2C master send data to slave only.///
 void setup() {
  Wire.begin();//Join I2C as a master
  Serial.begin(9600); 
  Wire.onRequest(request);
  }

void loop()
{ }

void request()
{
  Wire.write("hello ");
}
