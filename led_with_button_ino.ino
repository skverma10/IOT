int led = 12;
int switchpin=7;
void setup()
{
	pinMode(led,OUTPUT);
        pinMode(switchpin,INPUT);
}
void loop()
{
  int state = digitalRead(switchpin);
  if (state == HIGH)
  {
	digitalWrite(led,HIGH);
        delay(100);
        digitalWrite(led,LOW);
        delay(100);
	
  }
  else
  {
    	digitalWrite(led,HIGH);
  }
}
