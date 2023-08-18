
char val;

void setup()
{
Serial.begin(9600);
//val;
}

void loop()
{
  if(Serial.available()>0)
  {
    val=Serial.read();
    Serial.print(val);

  }

}
