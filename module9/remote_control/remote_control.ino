int x = 0;
int y = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(5,INPUT);
pinMode(13,OUTPUT);
pinMode(4,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

x = digitalRead(5);
y = digitalRead(4);
if(x == 1)
{digitalWrite(13,HIGH);

  }
if(y == 1)
{digitalWrite(13,LOW);
  }
  Serial.print(x);
  Serial.print("   ");
  Serial.println(y);
}
