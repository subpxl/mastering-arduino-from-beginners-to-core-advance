void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int leds[] = {2,3,4};

for(int x= 0;x<3;x++)
{digitalWrite(leds[x],HIGH);
Serial.println(leds[x]);
delay(1000);
  }

  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(1000);
}
