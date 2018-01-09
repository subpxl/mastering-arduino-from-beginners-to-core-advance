String type;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
  type =Serial.readString();
delay(1000);
  Serial.println(type);
  delay(1000);
  if(type = "abc")
{Serial.println("correct word");
delay(1000);
  }
  }




}



