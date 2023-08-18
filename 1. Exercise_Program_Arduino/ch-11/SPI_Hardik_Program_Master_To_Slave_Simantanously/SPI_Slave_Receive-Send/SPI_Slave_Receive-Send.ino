
#include<SPI.h>

//char SEND = 'S';
bool rxDone;
char slaveRX;
char slaveRXStore[50];
char slaveTX;
char slaveTXBuf[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
int slaveTXBufLen = strlen(slaveTXBuf);
int slaveTXOffset=0; 
char slaveRXBuf[256];
char slaveRXBufLen = 256;
int slaveRXOffset = 0;

char getslaveSend(){ 
  slaveTX = slaveTXBuf[slaveTXOffset];
  slaveTXOffset++ ;
  if (slaveTXOffset == slaveTXBufLen) slaveTXOffset = 0 ;
  return slaveTX ;
} 
 
void setslaveReceived() { 
  if (slaveRXOffset >= slaveRXBufLen-1) { 
    slaveRXOffset = 0 ;
    for (int i = 0; i < slaveRXBufLen; i++)
    { 
      slaveRXBuf[i] = 0 ;
    }  
  } 
  slaveRXBuf[slaveRXOffset] = slaveRX ;
  slaveRXOffset++ ;
} 

void setup() 
{ 
  Serial.begin(9600); 
  SPI.beginTransaction(SPISettings(50000, MSBFIRST, SPI_MODE0)) ;
  pinMode(MISO,OUTPUT);          
  SPCR |= _BV(SPE) ;                   
  rxDone = false ;
  SPI.attachInterrupt();
} 

ISR (SPI_STC_vect)                         
{ 
  slaveRX = SPDR ;
  setslaveReceived(); 
  SPDR = getslaveSend();
//  SPDR = SEND; 
  rxDone = true ;
} 

void loop() 
{ 
  if(rxDone){ 
    rxDone = false;
    Serial.print(slaveRX);
  } 

//if(slaveRX)
//  {
//    for(int i =0;i<30;i++)
//    {
//    slaveRXStore[i]=slaveRX;
//    }
//  }
//  if(slaveRX=='\n')
//  {
//    Serial.print(slaveRXStore);
//  }
}
