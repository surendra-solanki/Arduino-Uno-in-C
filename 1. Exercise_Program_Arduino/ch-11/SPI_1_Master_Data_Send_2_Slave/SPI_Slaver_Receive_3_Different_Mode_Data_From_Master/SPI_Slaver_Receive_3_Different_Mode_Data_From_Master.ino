#include<SPI.h>

char Data;

void setup() {
 Serial.begin(9600);
 SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE1));
 pinMode(MISO,OUTPUT);
 SPCR |= _BV(SPE);
 SPI.attachInterrupt();

}

ISR(SPI_STC_vect){
  Data=SPDR;
  Serial.print(Data);
}

void loop() {
  // put your main code here, to run repeatedly:

}
