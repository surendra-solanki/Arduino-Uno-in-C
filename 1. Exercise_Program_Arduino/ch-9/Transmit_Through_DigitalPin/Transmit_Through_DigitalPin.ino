#include <SoftwareSerial.h>

char Newvalue;
SoftwareSerial data(2,4); //rxpin,txpin

void setup()
{
    Serial.begin(9600);
    data.begin(9600);
}

void loop() {
while(data.available()>0)
{
 Newvalue= data.read();
 Serial.print(Newvalue);
}
  data.write("LOW\n");
 delay(1000);
}
