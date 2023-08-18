
#include <SoftwareSerial.h>

char value;
SoftwareSerial mySerial(2,4); //rx,tx

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
while(mySerial.available()>0)
{
  value= mySerial.read();
  Serial.print(value);

}
  mySerial.write("HIGH\n");
  delay(1000);
}
