#include<SPI.h>
char ch[9];
char Data[]="SURENDRA\n";

void setup() {
Serial.begin(9600);
digitalWrite(SS,HIGH);
SPI.begin();
SPI.setClockDivider(SPI_CLOCK_DIV128);
}

void loop() {
  digitalWrite(SS,LOW);
  for(int i=0;i<sizeof(ch);i++)
  {
  ch[i]=SPI.transfer(0);
  Serial.print(ch[i]);
    
  SPI.transfer(Data[i]);
   delay(100);
  }
//  ch=SPI.transfer(0);
//  Serial.print(ch);
  digitalWrite(SS,HIGH);
  delay(100);

}
