//////press switch once then all three led will blink simantanously but contionously. 

int i;
void setup() 
{
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  if(i=(digitalRead(2)))
  {
    for(int a=1;a>=i;a++)
    {
    if(a==1)
      {
      digitalWrite(7,HIGH);
      delay(1000);
      digitalWrite(7,LOW);
      delay(500);
    }

     if(a==2)
    {
        digitalWrite(4,HIGH);
        delay(1000);
        digitalWrite(4,LOW);
        delay(500);
    }

     if(a==3)
    {
        digitalWrite(8,HIGH);
        delay(1000);
        digitalWrite(8,LOW);
        delay(500);
    }
    
  }
  }
  }
