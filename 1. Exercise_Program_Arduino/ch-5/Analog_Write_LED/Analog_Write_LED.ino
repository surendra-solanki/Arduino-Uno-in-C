
int x=49;
int y;
void setup() {
pinMode(4,OUTPUT);
Serial.begin(9600);
}

void loop() 
{
  if(Serial.available())
  {
    y=Serial.read();
      
    if(x==y)
    {
      if(x==y)
      {
       digitalWrite(4,HIGH);
      for(int i=0;i<=255;i++)
      {
        analogWrite(3,i);
        Serial.println(i);
        //delay(100);
      } 

      for(int i=255;i>=0;i--)
      {
        analogWrite(3,i);
        Serial.println(i);
        //delay(100);
      }
      }
    }
    
  else
   {
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
     delay(500);
     x==49;
   }
  
}
}
