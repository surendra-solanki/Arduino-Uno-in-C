
////wait for some time this code
////is work properly but to store 256 data its take time.
////and master send data slave receive it but slave also send
////data but master dont want require data so i didnt print it.
#include <SPI.h>
char ch;
char val[]="IBRAHIM_LINCON ";
char data[256];
bool Daata;
void setup() {
Serial.begin(9600);
pinMode(MISO,OUTPUT);  //MISO
SPCR |= _BV(SPE);
//SPCR =64;
SPI.attachInterrupt();
}

 ISR(SPI_STC_vect){
  for(int i=0;i<sizeof(data);i++)
  {
    ch=SPDR;
    data[i]=ch;
    if(ch=='\r')
   {
     Daata = true;   
   }
   SPI.transfer(val[i]);
  }
    
//   for(int j=0;j<sizeof(val);j++)
//   {
//     SPI.transfer(val[j]);   
//   }
   } 
 
void loop() {
  
 if (Daata==true)
 {
  Serial.print(data);
 }
}

/*
 #include <SPI.h>
char buff [50];
volatile byte indx;
volatile boolean process;

void setup (void) {
   Serial.begin (9600);
   pinMode(MISO, OUTPUT); // have to send on master in so it set as output
   SPCR |= _BV(SPE); // turn on SPI in slave mode
   indx = 0; // buffer empty
   process = false;
   SPI.attachInterrupt(); // turn on interrupt
}
ISR (SPI_STC_vect) { // SPI interrupt routine
   byte c = SPDR; // read byte from SPI Data Register
   if (indx < sizeof buff) {
      buff [indx++] = c; // save data in the next index in the array buff
      if (c == '\r') //check for the end of the word
      process = true;
   }
}

void loop (void) {
   if (process) {
      process = false; //reset the process
      Serial.println (buff); //print the array on serial monitor
      indx= 0; //reset button to zero
   }
}

*/
