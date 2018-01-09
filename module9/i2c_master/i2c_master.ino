#include <Wire.h>
String c;
void setup() {
  // put your setup code here, to run once:
Wire.begin();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Wire.requestFrom(8,11);

if(Wire.available()>0)

{
  c = Wire.readString();
Serial.println(c);
delay(200);
  }
}
