
void setup()
{
    pinMode(7,OUTPUT);
    pinMode(8,INPUT);
    pinMode(12,OUTPUT);
    Serial.begin(9600);
}
void loop()
{
  long duration,distance;
  
   // digitalWrite(7,LOW);
    //delay(10);
    digitalWrite(7,HIGH);
    delayMicroseconds(1000);
    digitalWrite(7,LOW);
    duration=pulseIn(8,HIGH);
    distance=(duration/2 )/29;
    Serial.print(distance);
    Serial.print("\n");
    delay(1000);
    if(distance<=16)
    {
      digitalWrite(12,LOW);
    }
    else
    {
        digitalWrite(12,HIGH);
    }
}
    
