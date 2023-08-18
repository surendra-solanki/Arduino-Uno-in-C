#include <Wire.h>

char Data;

void setup()
{
 // Serial.begin();
 
  Serial.begin(9600);
  Wire.begin(5);
  Wire.onReceive(Action);
}

void loop()
{
  Serial.write("Surendra\n");
  delay(500);
}

void Action()
{
while(Wire.available())
{
Data=Wire.read();
Serial.print(Data);
}
}
