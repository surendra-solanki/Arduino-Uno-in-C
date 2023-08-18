
#include<SPI.h> 
 
//char masterTXBuf[] = "The data you received is from Master,While I'm Working on Arduino Software.Thank You!\n";
char masterTXBuf[] = "HELLODR";
int masterTXBufLen = strlen(masterTXBuf);
char masterRXBuf;
int i;

void setup () 
{ 
  Serial.begin(9600);
  digitalWrite(SS,HIGH);   
  SPI.begin(); 
  
  SPI.beginTransaction(SPISettings (100000, MSBFIRST, SPI_MODE0)) ;
} 

void spiTXRX() { 
  digitalWrite(SS,LOW); 
  for (i = 0; i < masterTXBufLen; i++) { 
  masterRXBuf = SPI.transfer(masterTXBuf);
  //Serial.print(""); 
  Serial.print(masterRXBuf); 
  } 
  digitalWrite(SS,HIGH);  
} 

void loop() 
{  
  spiTXRX();
//  delay(1000); 
} 
