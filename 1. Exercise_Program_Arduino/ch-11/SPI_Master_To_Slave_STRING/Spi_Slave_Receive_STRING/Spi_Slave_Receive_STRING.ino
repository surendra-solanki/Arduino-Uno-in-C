#include <SPI.h>
char ch[10];
char rec[]= "HELLODR";

//char ch;
void setup() {
Serial.begin(9600);
pinMode(MISO,OUTPUT);  //MISO
  SPI.beginTransaction(SPISettings(100000, MSBFIRST, SPI_MODE0)) ;
SPCR |= _BV(SPE);
//SPCR =64;
SPI.attachInterrupt();
}

 ISR(SPI_STC_vect){
    for(int i=0;i<10;i++)
    {
          ch[i]=SPDR;
      Serial.print(ch[i]);
      SPI.transfer(rec[i]);
    }
//          ch=SPDR;
//      Serial.print(ch);
 }

 
void loop() {
//  delay(1000);
}
