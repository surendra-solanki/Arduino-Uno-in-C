#include <SPI.h>

  const int slaveAPin = 6;          // using two incompatible SPI devices, A and B. Incompatible means that they need different SPI_MODE
  const int slaveBPin = 7;
               
  char slaveAData='S';
  char slaveBData='H';

  SPISettings settingsA(1000000, MSBFIRST, SPI_MODE1);    // set up the speed, data order and data mode
  SPISettings settingsB(1000000, LSBFIRST, SPI_MODE3);

  void setup() {
    Serial.begin(9600);
    pinMode (slaveAPin, OUTPUT);    // set the Slave Select Pins as outputs:
    pinMode (slaveBPin, OUTPUT);
    SPI.begin();    // initialize SPI:
    
}

void loop() {
  
 
   SPI.beginTransaction(settingsA);  
  digitalWrite (slaveAPin, LOW);
  SPI.transfer(slaveAData);
  Serial.print(slaveAData);      
  digitalWrite (slaveAPin, HIGH);
  SPI.endTransaction();


  SPI.beginTransaction(settingsB);

  digitalWrite (slaveBPin, LOW);
  SPI.transfer(slaveBData);
  Serial.print(slaveBData);
  digitalWrite (slaveBPin, HIGH);

  SPI.endTransaction();
}
