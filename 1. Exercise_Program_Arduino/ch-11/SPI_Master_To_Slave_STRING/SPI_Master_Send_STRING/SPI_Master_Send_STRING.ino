
#include <SPI.h>
char val[]="abcdefghijklmnopqrstuvwxyz\n";
char data;

void setup() {
Serial.begin(9600);
TCCR1A = 0;
 TCCR1B = 0;
   TCCR1B |= B00000100;
     TIMSK1 |= B00000010;
       OCR1A = 31250;
       
digitalWrite(SS,HIGH);
SPI.begin();
//SPI.setClockDivider(SPI_CLOCK_DIV128);
SPI.beginTransaction(SPISettings(100000, MSBFIRST, SPI_MODE0));
}

ISR(TIMER1_COMPA_vect){
  TCNT1  = 0;
    for(int i=0;i<sizeof(val);i++)
      {
      data = SPI.transfer(val[i]);
      Serial.print(data);
       delay(100);
      }
}
void loop() {
  digitalWrite(SS,LOW);
//  data=SPI.transfer(0);
//  Serial.print(data);
//  delay(10);

//    data = SPI.transfer(0);
//    Serial.print(data);
//    delay(100);
//    if(data=='\n')
    {
      for(int i=0;i<sizeof(val);i++)
      {
      data = SPI.transfer(val[i]);
      Serial.print(data);
       delay(100);
      }
    } 

//  delay(10);
//   for(int i=0;i<sizeof(val2);i++)
//  {
//  val2[i]=SPI.transfer(0);
//  Serial.print(val2[i]);
//  }
  
  digitalWrite(SS,HIGH);
//  delay(1000);
}
