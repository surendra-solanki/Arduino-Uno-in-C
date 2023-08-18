
String b;
void setup()
{
Serial.begin(115200);
}

void loop()
{
  while( Serial.available( ) )  
  {
  b = Serial.readString( );  
  Serial.println(b);  
  }
}
