const int buttonPin = 2;    
const int ledPin =  8;     
boolean button = LOW; 
int p=0;
//boolean debounce(boolean button);

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop()
{
  
  if(debounce(button) == HIGH && button == LOW)
  {
    p++;
    button = HIGH;
  }
  else if(debounce(button) == LOW && button == HIGH)
  {
       button = LOW;
  }
 
  if(p>0)
 { 
 int x=p;
 int count=0;
 Serial.println(x);
    if(x==1)
    {
        digitalWrite(4,HIGH);
        delay(300);
        digitalWrite(4,LOW);
        delay(200);
    }
   
     if(x==2)
    {
        digitalWrite(7,HIGH);
        delay(300);
        digitalWrite(7,LOW);
        delay(200);
     }
   
      if(x==3)
     {
        digitalWrite(ledPin,HIGH);
        delay(300);
        digitalWrite(ledPin,LOW);
        delay(200);
    }
  
 }
 
}

boolean debounce(boolean button)
{
  boolean Now;
  Now = digitalRead(buttonPin);
  if(button!=Now)
  {
    delay(10);
   Now = digitalRead(buttonPin);
  }
  return Now; 
}
