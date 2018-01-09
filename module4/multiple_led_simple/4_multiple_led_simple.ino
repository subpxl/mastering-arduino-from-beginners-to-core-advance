 

void setup()
{
  pinMode(2, OUTPUT);   // sets the pin as output
  pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);

}

void loop()
{
   // read the input pin
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(1000);

  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1000);
  
    
}

