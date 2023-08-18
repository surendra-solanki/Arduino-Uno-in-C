//////press switch once time then one led will blink for 1 time  led1=7
/////press switch twice times 2nd led will blink for twice ....  led2=4
/////press switch thrice times 3nd led will blink for twice .... led3=8

int a;
int i=0;
void setup() {
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,INPUT);
}

void loop() {
  if(a=(digitalRead(2)==HIGH))
  {
   
    int count=0;
    if(a>0)
    {count++;
    }
     i+=count;
    if(i==1)
    {
     for(int x=1;x<=i;x++)
      {
      digitalWrite(7,HIGH);
      delay(1000);
      digitalWrite(7,LOW);
      delay(500);
      }
    }

     if(i==2)
    {
      for(int y=1;y<=i;y++)
      {
        digitalWrite(4,HIGH);
        delay(1000);
        digitalWrite(4,LOW);
        delay(500);
      }
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
    }
    
  }
}




/*
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;    // the number of the pushbutton pin
const int ledPin =7 ;// the number of the LED pin
const int ledPin2=4;
const int ledPin3=8;

// Variables will change:
int ledState = HIGH;         // the current state of the output pin
int buttonState;             // the current reading from the input pin
int lastButtonState = LOW;   // the previous reading from the input pin

// the following variables are unsigned longs because the time, measured in
// milliseconds, will quickly become a bigger number than can be stored in an int.
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  // set initial LED state
  digitalWrite(ledPin, ledState);
}

void loop() {
  // read the state of the switch into a local variable:
  int reading = digitalRead(buttonPin);

  // check to see if you just pressed the button
  // (i.e. the input went from LOW to HIGH), and you've waited long enough
  // since the last press to ignore any noise:

  // If the switch changed, due to noise or pressing:
  if (reading != lastButtonState) {
    // reset the debouncing timer
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // whatever the reading is at, it's been there for longer than the debounce
    // delay, so take it as the actual current state:


    if (reading != buttonState) {
      buttonState = reading;

      
      if (buttonState == HIGH) {
        ledState = !ledState;
      }
    }
  }

  digitalWrite(ledPin, ledState);
  delay(500);
  
  lastButtonState = reading;
}
*/
