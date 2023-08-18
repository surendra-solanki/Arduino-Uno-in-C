
int y;
int value;

void setup() {
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop() {
    if(Serial.available())
    {
      y=Serial.read();
      Serial.println(y);
    }
}
