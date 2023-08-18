#include<Wire.h>
char valueNew; 

void setup() {
Wire.begin();
}

void loop() { 
   Wire.beginTransmission(44);   //Tx to device number 44(0x2C)
  Wire.write("Surendra ");      //Send value in byte
  Wire.endTransmission();       //Stop Tx
}
