int x= 0;
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(x<5)
{digitalWrite(9,HIGH);
  x++;
  Serial.println(x);
  delay(500);
  }
  digitalWrite(9,LOW);
  Serial.println(x);
  delay(5000);
}
