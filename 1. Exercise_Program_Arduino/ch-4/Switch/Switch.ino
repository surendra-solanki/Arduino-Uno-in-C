/////switch press led blink else led low
 int SW=2;
 int LED=4;

void setup() {
 pinMode(SW,INPUT);
 pinMode(LED,OUTPUT);
 pinMode(13,OUTPUT);
}
void loop()
{
  if( digitalRead(SW)==LOW)
  {
    digitalWrite(LED,HIGH);
    digitalWrite(13,HIGH);
  }
   else if( digitalRead(SW)==HIGH)
  {
    digitalWrite(LED,LOW);
    digitalWrite(13,LOW); 
  }
}
