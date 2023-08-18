
#include <Wire.h>
#include <SoftwareSerial.h>

char val,New;
SoftwareSerial myserial(2,4); //rx,tx

void setup() {
   Serial.begin(9600);
   Wire.begin();
   myserial.begin(9600);
}

void loop() 
{
  while(Serial.available())
  {
    val=Serial.read();
    Serial.print(val);

 if (val=='\n')
 {
  Wire.beginTransmission(7);
  Wire.write("SOLANKI\n");
  Wire.endTransmission();
 }
  }
  
while(myserial.available())
{
  val=myserial.read();
  Serial.print(val);

// if (val=='\n')
// {
//  Wire.beginTransmission(5);
//  Wire.write("WORLD\n");
//  Wire.endTransmission();
// }
}
}


//  Wire.requestFrom(7,8);
//  while(Wire.available())
//  {
//    New=Wire.read();
//    Serial.print(New);
