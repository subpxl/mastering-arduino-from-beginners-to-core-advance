String input;                                         // character array of size 12 
void setup()
{
 pinMode(13,OUTPUT);
   Serial.begin(9600);                                  // begin serial port with baud rate 9600bps
}
void loop()
{
   if(Serial.available())
   {
      while(Serial.available() >0)          // Read 12 characters and store them in input array
      {
         input = Serial.readString();
         delay(5);
      }
      Serial.println(input);                             // Print RFID tag number 



       if (input == "08008D3609BA")
       {digitalWrite(13,HIGH);
       Serial.println("   yes");
        }

       else
       {
        digitalWrite(13,LOW);
        Serial.println("   no");
        }
   }





}
