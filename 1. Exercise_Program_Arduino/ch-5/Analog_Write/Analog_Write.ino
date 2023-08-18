void setup() {
Serial.begin(9600);

}

void loop() {
digitalWrite(4,HIGH);  //digital
delay(1000);  
digitalWrite(4,LOW);
delay(1000);

//analogWrite(3,HIGH);   //digital
//delay(1000);
//analogWrite(3,LOW);  
//delay(1000);
  
//for(int i=0;i<=255;i++)  //Analog
//{
//analogWrite(3,i);
//Serial.println(i);
//}
//
//for(int i=255;i>=0;i--)
//{
//analogWrite(3,i);
//Serial.println(i);
//}
}
