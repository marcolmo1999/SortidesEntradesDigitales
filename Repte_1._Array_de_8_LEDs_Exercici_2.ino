void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(6,HIGH);
digitalWrite(8,HIGH);
digitalWrite(10,HIGH);
digitalWrite(12,HIGH);
delay(1000);
digitalWrite(6,LOW);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
digitalWrite(12,LOW);
delay(10);
digitalWrite(5,HIGH);
digitalWrite(7,HIGH);
digitalWrite(9,HIGH);
digitalWrite(11,HIGH);
delay(1000);
digitalWrite(5,LOW);
digitalWrite(7,LOW);
digitalWrite(9,LOW);
digitalWrite(11,LOW);
delay(10);
}

