int Switch=1;

void setup() {
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 attachInterrupt(digitalPinToInterrupt(2),Switch_Function,RISING);
}

void loop() {
 digitalWrite(2,HIGH);
 delay(1000);
 digitalWrite(2,LOW);
 delay(1000);

}

void Switch_Function()
{
  if(Switch==1)
  {
    pinMode(3,HIGH);
    delay(1500);
  }
}
