
char value;
void setup() {
Serial.begin(9600);
Serial.write("Students\n");
}

void loop() {
 while(Serial.available())
 { 
  value=Serial.read();
  Serial.print(value);

//  if(value=='\n')
//  {
//    Serial.print("Student");
//  }
 } 
}
