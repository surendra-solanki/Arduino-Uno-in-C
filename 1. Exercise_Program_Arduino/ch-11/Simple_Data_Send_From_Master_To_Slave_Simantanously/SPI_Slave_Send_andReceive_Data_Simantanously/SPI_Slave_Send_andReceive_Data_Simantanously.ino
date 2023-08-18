#include <SPI.h>
char val[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ch;
int i=0;

void setup()
{
Serial.begin(9600);
SPI.beginTransaction(SPISettings(20000, MSBFIRST, SPI_MODE0)) ;
pinMode(MISO,OUTPUT);  //MISO
SPCR |= _BV(SPE);
//SPCR =64;
SPI.attachInterrupt();
}

 ISR(SPI_STC_vect){
      Receive_Data();
     
  if(i>=sizeof(val))
  {
    i=0;
  } 
   Send_Data(i,val);
     i++;
//      ch[i]=SPDR;
//      Serial.print(ch[i]);
//      SPDR=val[i];
      
//        ch[i]=SPI.transfer(val[i]);
//        Serial.print(ch[i]);
    
 }
 
void loop() {
  //delay(1000);
}

void Receive_Data()
{
      ch=SPDR;
      Serial.print(ch); 
}

void Send_Data(int i,char val[])
{
     if(i<9)
     {
      SPDR=val[i];
     } 

//for(i=0;i<=9;i++)
//{
//  //SPDR=val[i];
//  SPI.transfer(val[i]);
//}
}
