#include <SPI.h>

void setup (void) {
   Serial.begin(9600); //set baud rate to 115200 for usart
   digitalWrite(SS, HIGH); // disable Slave Select
   SPI.begin ();
   SPI.setClockDivider(SPI_CLOCK_DIV16);//divide the clock by 8
}

void loop (void) {
   char c;
   digitalWrite(SS, LOW); // enable Slave Select
   // send test string
   for (const char * p = "JIGISHAa \r" ; c = *p; p++) {
      SPI.transfer (c);
      Serial.print(c);
   }
   digitalWrite(SS, HIGH); // disable Slave Select
   delay(100);
}
