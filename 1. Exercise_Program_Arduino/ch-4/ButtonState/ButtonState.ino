    
  int lastButtonState;

  unsigned long lastTimeButtonStateChanged = millis();
  unsigned long debounceDuration = 50;
  
void setup() {
 pinMode(2,INPUT);
 pinMode(4,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 lastButtonState = digitalRead(2);
}

void loop() {
 if (millis()-lastTimeButtonStateChanged >debounceDuration)
 {
  int buttonState=0;
  
   buttonState += digitalRead(2);
  if(buttonState != lastButtonState)
  {
    lastTimeButtonStateChanged = millis();
    lastButtonState = buttonState+lastButtonState;
    if (buttonState == 1)
    {
      digitalWrite(4,HIGH);
      delay(500);
      digitalWrite(4,LOW);
      delay(300);
    }
     if (buttonState == 2)
    {
      digitalWrite(7,HIGH);
      delay(500);
      digitalWrite(7,LOW);
      delay(300);
    }
  }
 }
}
