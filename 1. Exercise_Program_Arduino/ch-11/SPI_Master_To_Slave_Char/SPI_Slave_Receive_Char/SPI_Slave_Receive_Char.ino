#include <SPI.h>
char ch;

void setup() {
Serial.begin(9600);
pinMode(MISO,OUTPUT);  //MISO
SPCR |= _BV(SPE);
//SPCR =64;
SPI.attachInterrupt();
}

 ISR(SPI_STC_vect){
    ch=SPDR;
    Serial.print(ch);
 }

 
void loop() {
 // delay(1000);
}
