#include<SPI.h>

char Data2;

void setup() {
 Serial.begin(9600);
  SPI.beginTransaction(SPISettings(1000000, LSBFIRST, SPI_MODE3));
 pinMode(MISO,OUTPUT);
 SPCR |= _BV(SPE);
 SPI.attachInterrupt();

}

ISR(SPI_STC_vect){
  Data2=SPDR;
  Serial.print(Data2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
