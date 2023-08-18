void setup()
  {
  pinMode(7,OUTPUT);
  pinMode(2,INPUT);
  }

  void loop()
  {
    int i;
    i=digitalRead(2);
    digitalWrite(7,i);
    delay(100);
  }
