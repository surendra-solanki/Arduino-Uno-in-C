//////press switch once then one led will blink for 1 time
//////press switch onceagain then 2nd led will blink for 2 time
/////press switch once again 3nd led will blink for thrice....
int a;
int i=0;
void setup() {
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
 if(a=digitalRead(2));
  {
     i+=a;
    if(i==1)
    {
     for(int x=1;x<=i;x++)
      {
      digitalWrite(4,HIGH);
      delay(1000);
      digitalWrite(4,LOW);
      delay(500);
      }
      i=2;
    }

     if(i==2)
    {
      for(int y=1;y<=i;y++)
      {
        digitalWrite(7,HIGH);
        delay(1000);
        digitalWrite(7,LOW);
        delay(500);
      }
      i=3;
    }

     if(i==3)
    {
      for(int z=1;z<=i;z++)
      {
        digitalWrite(8,HIGH);
        delay(1000);
        digitalWrite(8,LOW);
        delay(500);
      }
      i=4;
    }
    else
    {
     digitalWrite(4,LOW);
     digitalWrite(7,LOW);
     digitalWrite(8,LOW); 
    }
}
}
