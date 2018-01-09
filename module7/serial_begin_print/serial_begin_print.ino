void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(548,HEX);
Serial.print(548,OCT);
Serial.print(548,BIN);
Serial.println(548.113344,7);

delay(500);

}
