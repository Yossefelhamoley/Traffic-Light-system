// C++ code
//
int red = 13;
int yellow = 12;
int blue = 8;
int oN = 1000;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop()
{
  digitalWrite(red,HIGH);
  delay(oN);
  digitalWrite(yellow,HIGH);
  delay(oN);
  digitalWrite(yellow,LOW);
  delay(oN);
  digitalWrite(yellow,HIGH);
  delay(oN);
  digitalWrite(yellow,LOW);
  delay(oN);
  digitalWrite(yellow,HIGH);
  delay(oN);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  delay(oN);
  digitalWrite(yellow,LOW);
  delay(oN);
 digitalWrite(blue,LOW);
  delay(5000);
}