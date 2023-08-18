////write a program to read data from serial monitor 1 and 0 and blink led when serial input data 1 and off led when serial input data 0. 
 int SW=2;
 int LED=4;
int x;
void setup() {
 Serial.begin(9600);
 pinMode(SW,INPUT);
 pinMode(LED,OUTPUT);
 pinMode(13,OUTPUT);
}

void loop()
{
  if(Serial.available())
  {
  x=Serial.read();
  if(x==49)
  {
    digitalWrite(LED,HIGH);
    digitalWrite(13,HIGH);
  }
   else if(x==48)
  {
    digitalWrite(LED,LOW);
    digitalWrite(13,LOW); 
  }
}
}
