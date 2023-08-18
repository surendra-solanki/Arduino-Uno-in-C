char value_new;   //UART
void setup() {
 Serial.begin(9600);
}

void loop() {
 while(Serial.available()>0)
{
  value_new=Serial.read();
  Serial.print(value_new);
}
    Serial.write("TRANSMIT\n");
    delay(1000);
}
