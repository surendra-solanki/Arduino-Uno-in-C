#include <SPI.h>
char ch[9]="SOLANKIp ";
char val;
void setup() {
Serial.begin(9600);
pinMode(MISO,OUTPUT);  //MISO
SPCR |= _BV(SPE);
SPI.attachInterrupt();
}

 ISR(SPI_STC_vect){
  digitalWrite(SS,LOW);
  for(int i=0;i<sizeof(ch);i++)
  {
    val=SPDR;
    Serial.print(val);
    //SPDR=ch[i];
    SPI.transfer(ch[i]);
  } 
   digitalWrite(SS,HIGH);
  delay(100);  
 }
 
void loop() {
 // delay(1000);
}
