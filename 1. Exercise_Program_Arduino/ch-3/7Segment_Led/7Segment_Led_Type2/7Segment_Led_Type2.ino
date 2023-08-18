const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;
const int h = 9;


void setup()
{
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop()
{
for(int i=0;i<=9;i++)
{
if(i==0)  ///zero
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(h,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
delay(500);
}
if(i==1)   //one
{
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
delay(500);
}
if(i==2)   //two
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(g,LOW);
delay(500);
}
if(i==3)  ///three
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(g,LOW);
delay(500);
}
if(i==4)  ///four
{
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
delay(500);
}
if(i==5)  ///five
{
digitalWrite(a,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
delay(500);
}
if(i==6)  ///six
{
digitalWrite(a,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
delay(500);
}
if(i==7)  ///seven
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
delay(500);
}
if(i==8)  ///eight
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
delay(500);
}
if(i==9)  ///nine
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
delay(500);
}

}
}
