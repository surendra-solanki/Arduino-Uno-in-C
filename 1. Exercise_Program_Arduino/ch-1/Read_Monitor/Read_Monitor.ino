
char b;
void setup()
{
Serial.begin(9600);
}

void loop()
{
  while( Serial.available( ) )  
  {
  b = Serial.read( );  
  Serial.println(b);  
  }
}
