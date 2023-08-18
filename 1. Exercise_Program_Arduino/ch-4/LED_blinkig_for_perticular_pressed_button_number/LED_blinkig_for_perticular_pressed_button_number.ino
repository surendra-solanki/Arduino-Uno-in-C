
const int buttonPin = 2;    
const int ledPin =  8;     

boolean button = LOW; 

int p=0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
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
    }
    else
    {
      digitalWrite(ledPin,LOW);
    }
     if(p%2==0)
    {
    digitalWrite(7,HIGH);
    }
    else
    {
      digitalWrite(7,LOW);
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
