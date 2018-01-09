void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
Serial.println("clockwise");
delay(10000);

digitalWrite(3,LOW);
digitalWrite(4,HIGH);
Serial.println("counter-clockwise");
delay(10000);
}
