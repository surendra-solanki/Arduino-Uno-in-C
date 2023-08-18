
#include <SPI.h>
char val='S';

void setup() {
Serial.begin(9600);
digitalWrite(SS,HIGH);
SPI.begin();
//SPI.setClockDivider(SPI_CLOCK_DIV16);
SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
}

void loop() {
  digitalWrite(SS,LOW);
  SPI.transfer(val);
  digitalWrite(SS,HIGH);
  delay(100);
}
