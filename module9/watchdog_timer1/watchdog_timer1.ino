#include<avr/wdt.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("watchdog timer initiated");
wdt_disable();
delay(1000);
wdt_enable(WDTO_2S);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0;i<10;i++)
{
  digitalWrite(13,HIGH);
  delay(100);
  
  digitalWrite(13,LOW);
  delay(100);
  Serial.println(i);


  if(i>3)
  {
    break;
    }
    wdt_reset();
  }

while(1);
}
