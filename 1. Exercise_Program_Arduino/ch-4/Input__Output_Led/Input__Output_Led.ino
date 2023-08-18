
void setup() {
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  if(digitalRead(2)==HIGH)
  {
    digitalWrite(7,LOW);
    digitalWrite(4,LOW);
    digitalWrite(8,LOW);
    
  }
   else if(digitalRead(2)==LOW)
  {
    digitalWrite(7,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(8,HIGH);
  }

}
