int b = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);

}

void loop() {
 
 b = digitalRead(2);

 if(b ==1)
 
 {
  digitalWrite(3,HIGH);
  }
  
 else
 {digitalWrite(3,LOW);
 }
}
