String input ;
int x = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(11,OUTPUT);  // buzzer
}

void buzzer ()     // function
{digitalWrite(11,HIGH);
delay(1000);
digitalWrite(11,LOW);
delay(1000);
digitalWrite(11,HIGH);
delay(1000);
digitalWrite(11,LOW);
delay(1000);
  }

void loop() {
  // put your main code here, to run repeatedly:
x = analogRead(A0);
if(Serial.available()>0)   // rfid
{
  input = Serial.readString();
  Serial.println(input);

  if(input == "08008D8D6860") // matching
  {digitalWrite(3,HIGH);
  digitalWrite(4,LOW);

  }

}
    if(x >1020)
    {digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    buzzer();
    }
    
  
  Serial.print(input);
  Serial.print("    ");
  Serial.println(x);
}
