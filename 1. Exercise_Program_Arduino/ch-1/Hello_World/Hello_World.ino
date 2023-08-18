
int incomingByte = 0;
void setup() {
  Serial.begin(9600);
  Serial.print("\"HELLO WORLD.\"\n");
  Serial.println(78);
  Serial.println('S');
  Serial.println(1.29);
  Serial.println(1.23);
  Serial.println(1.2356,12);
  Serial.println('H');
  Serial.println();
}

void loop()
{
  // send data only when you receive data:
  if (Serial.available() > 0) 
  {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte,DEC);
  } 
}
