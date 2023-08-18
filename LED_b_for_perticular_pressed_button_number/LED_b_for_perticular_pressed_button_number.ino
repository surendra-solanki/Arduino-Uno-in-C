
const int buttonPin = 2;    
const int ledPin =  8;     
boolean button = LOW; 
int p=0;

void setup() {
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
    if(p%3==0)
    {
        digitalWrite(ledPin,HIGH);
        //delay(500);
    }
    else
    {
        digitalWrite(ledPin,LOW);
        //delay(300);
      }
   }
}

boolean debounce(boolean button)
{
  boolean Now = digitalRead(buttonPin);
  if(button!=Now)
  {
    delay(10);
   Now = digitalRead(buttonPin);
  }
  return Now;
  
}
