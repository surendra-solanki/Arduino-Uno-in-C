
int val;
void setup()
{
  Serial.begin(115200);
  val;
}

void loop()
{
   if(Serial.available()>0)
  {
    val=Serial.read();
    Serial.println(val);
  }
}
