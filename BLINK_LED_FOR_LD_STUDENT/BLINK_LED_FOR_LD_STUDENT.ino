
int a=0;
int j=0;
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==HIGH)
  {
    j++;
  }
  
  if( j==1)
  {
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(500);
    j=2;;
    
  }
  
  if(j==3)
  {
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(500);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(500);
    j=4;
  }

   if(j==5)
  {
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(500);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(500);
     digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(500);
    j=0;
  }
  
  

}
