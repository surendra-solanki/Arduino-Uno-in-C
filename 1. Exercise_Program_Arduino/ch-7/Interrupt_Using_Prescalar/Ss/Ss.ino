

//timer setup for timer0, timer1, and timer2.
//For arduino uno or any board with ATMEL 328/168..
//diecimila, duemilanove, lilypad, nano, mini...

//this code will enable all three arduino timer interrupts.
//timer0 will interrupt at 2kHz //and its a 8-bit
//timer1 will interrupt at 1Hz //and its a 16-bit
//timer2 will interrupt at 8kHz //and its a 8-bit

//storage variables
boolean toggle0 = 0;
boolean toggle1 = 0;
boolean toggle2 = 0;

void setup(){
  
  //set pins as outputs
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);


//set timer0 interrupt at 2kHz
  TCCR0A = 0;// set entire TCCR2A register to 0
  TCCR0B = 0;// same for TCCR2B
  TCNT0  = 0;//initialize counter value to 0
  // set compare match register for 2khz increments
  OCR0A = 250;// = (16*10^6) / (2000*64) - 1 (must be <256)
  // turn on CTC mode
  TCCR0A |= (1 << WGM01);
  // Set CS01 and CS00 bits for 64 prescaler | (1<<CS00)
  TCCR0B |= (1<<CS02);
  // enable timer compare interrupt
  TIMSK0 |= (1 << OCIE0A);

}//end setup

ISR(TIMER0_COMPA_vect){//timer0 interrupt 2kHz toggles pin 8 
//generates pulse wave of frequency 2kHz/2 = 1kHz (takes two
//cycles for full wave- toggle high then toggle low)
    digitalWrite(13,HIGH); 
    digitalWrite(13,LOW);
}
/*
ISR(TIMER1_COMPA_vect){//timer1 interrupt 1Hz toggles pin 13 (LED)
//generates pulse wave of frequency 1Hz/2 = 0.5kHz 
//(takes two cycles for full wave- toggle high then toggle low)
    digitalWrite(13,HIGH);
    digitalWrite(13,LOW);
}
*/  

void loop(){
}
