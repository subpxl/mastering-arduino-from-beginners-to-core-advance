int val;


void setup()
{
Serial.begin(9600);
pinMode(2,OUTPUT);
}
void loop()
{
val = analogRead(A0);

float mv = ( val/1024.0)*5000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;

Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
delay(100);


if(cel > 29)
{digitalWrite(2,HIGH);
delay(100);}
else
{
  digitalWrite(2,LOW);}
 

}

