void setup()
{
	pinMode(2,INPUT);
	//pinMode(A1,OUTPUT);
	//pinMode(A2,OUTPUT);
	pinMode(13,OUTPUT);
        //digitalWrite(A2,HIGH);
        //digitalWrite(A1,LOW);
	Serial.begin(9600);
}
void loop()
{
	if(digitalRead(2) == HIGH)
	{
		digitalWrite(13,HIGH);
	}
	else
	{
		digitalWrite(13,LOW);
	}
        digitalWrite(12,HIGH);
        delay(100);
        digitalWrite(12,LOW);
        delay(100);
        
}
