 

void setup()
{
  pinMode(2, OUTPUT);   // sets the pin as output
  pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);

}

void loop()
{
int led[3 ] = {2,3,4};

for (int i = 0;i<4;i++)
{

digitalWrite(led[i], HIGH);
  delay(1000);  
  }
    
}

