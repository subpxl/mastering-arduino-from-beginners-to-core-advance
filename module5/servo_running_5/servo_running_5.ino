
#include <Servo.h>
int deg = 180;
Servo my;
void setup() {
  // put your setup code here, to run once:

my.attach(3);
}

void loop() {
  // put your main code here, to run repeatedly:
my.write(deg);
}
