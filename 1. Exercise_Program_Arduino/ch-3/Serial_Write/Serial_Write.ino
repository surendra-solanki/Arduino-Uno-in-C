int arrivingdatabyte;
int a=65;
int value;
byte b[4]={54,74,12,8};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print(28,DEC);
Serial.write("\nSurendra");
   //op=h
Serial.write(b,4);
}

void loop(){ 
  value =Serial.read();
  Serial.println(value);
  delay(2000);
  
}
