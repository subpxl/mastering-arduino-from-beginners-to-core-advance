int x =0;
int y = 0;
int z = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);   //relay 1
pinMode(4,OUTPUT);   // relay 2
pinMode(A0,INPUT);   // pezioelectric
pinMode(8,INPUT);    // remote
pinMode(9,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
x= digitalRead(8);
y = digitalRead(9);
z = analogRead(A0);



if(x ==1)
{digitalWrite(3,HIGH);
digitalWrite(4,LOW);

  }

  if(z >1020)
  {digitalWrite(3,LOW);
  digitalWrite(4,LOW);
    }

    Serial.print(x);
    Serial.print("    ");
    Serial.println(z);
}

