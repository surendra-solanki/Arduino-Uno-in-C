#include <Wire.h>
#include <SoftwareSerial.h>

char Data;
SoftwareSerial myserial(2,4);//rx,tx

void setup() {
Serial.begin(9600);
Wire.begin(7);
Wire.onReceive(Fun);
myserial.begin(9600);
//Wire.onRequest(Funct);
}

void loop() {

}

void Fun()
{
while(Wire.available())
{
Data=Wire.read();
Serial.print(Data);
if(Data=='\n')
{
myserial.write("HELLO\n");
delay(500);
}
}
}
