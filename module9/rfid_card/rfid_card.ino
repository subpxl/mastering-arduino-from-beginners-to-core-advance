String input;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

if(Serial.available()>0)
{input = Serial.readString();
delay(100);
Serial.println(input);
  
  if(input =="08008D3609BA")
  {
    digitalWrite(13,HIGH);
  Serial.println(" correct value");
    }
else
{digitalWrite(13,LOW);
Serial.println(" incorrect");
}
}

    
  }

