int x = 0;
int y = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(8,INPUT);
pinMode(9,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x = digitalRead(8);
y = digitalRead(9);


if(x==1)
{digitalWrite(3,HIGH);
digitalWrite(4,LOW);

  }

  if(y ==1)
  {digitalWrite(3,LOW);
  digitalWrite(4,LOW);
    }
    Serial.print(x);
    Serial.print("    ");
    Serial.println(y);
}
