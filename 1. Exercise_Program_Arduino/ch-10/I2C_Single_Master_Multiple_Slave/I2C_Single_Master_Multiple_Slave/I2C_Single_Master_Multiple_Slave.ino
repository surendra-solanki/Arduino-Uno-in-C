#include<Wire.h>
char valueNew; 

void setup() {
Wire.begin();
}

void loop() { 
  Wire.beginTransmission(44);   //Tx to device number 44(0x2C)
  Wire.write("SURAT ");      //Send value in byte
  Wire.endTransmission();       //Stop Tx

  Wire.beginTransmission(458);   //Tx to device number 44(0x2C)
  Wire.write("AHMEDA125 ");      //Send value in byte
  Wire.endTransmission();       //Stop Tx

//  Wire.beginTransmission(46);   //Tx to device number 44(0x2C)
//  Wire.write("KALUPUR123 ");      //Send value in byte
//  Wire.endTransmission();       //Stop Tx
}
