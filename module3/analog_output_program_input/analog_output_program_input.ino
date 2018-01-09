int v = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
v = 25;
analogWrite(3,v);
Serial.println(v);
}
