void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int myarray[] = {6,8,3,2,9,22};
for(int x= 0;x<6;x++)
{Serial.println(myarray[x]);
delay(500);
}
}
