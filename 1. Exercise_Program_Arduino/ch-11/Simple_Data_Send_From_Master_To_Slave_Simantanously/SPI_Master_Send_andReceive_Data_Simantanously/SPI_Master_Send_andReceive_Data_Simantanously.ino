#include <SPI.h>
char val[]="SURENDRA ";
char ch[9];
void setup (void) {
   Serial.begin(9600); //set baud rate to 115200 for usart
   digitalWrite(SS, HIGH); // disable Slave Select
   SPI.begin ();
   SPI.setClockDivider(SPI_CLOCK_DIV64);//divide the clock by 8
}

void loop (void) {
   digitalWrite(SS, LOW); // enable Slave Select
   for (int i=0;i<sizeof(val);i++)
   {
      ch[i]=SPI.transfer(val[i]);
      Serial.print(ch[i]);
      //delay(1000);
   }
   digitalWrite(SS, HIGH); // disable Slave Select
//   delay(1000);
}
