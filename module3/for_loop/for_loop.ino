
int x = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

for(x = 0;x<5;x++)
{digitalWrite(9,HIGH);
Serial.println(x);
delay(1000);

if(x==3)
{break;}
  }
  digitalWrite(9,LOW);
  delay(5000);
}
