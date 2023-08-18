char val1='N';
char val2 ='F';
char val; 
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  while(Serial.available() >0)
  {
 val=Serial.read();
 Serial.println(val);
 if(val==val1)
 {
  digitalWrite(13,HIGH);
 }
 
  if(val==val2)
 {
  digitalWrite(13,LOW);
 }
 }
 }
