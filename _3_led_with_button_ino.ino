const int yellow = 2;
const int red1 = 7;
const int red2 = 4;
int switchpin = 8;
void setup()
{
	pinMode(yellow, OUTPUT);
	pinMode(red1,OUTPUT);
	pinMode(red2, OUTPUT);
	pinMode(switchpin,INPUT);
}
void loop()
{
        int state;
        state = digitalRead(switchpin);
	if( state == LOW ) 
        {
                digitalWrite(yellow,LOW);
		digitalWrite(red1,HIGH);
		delay(100);
		digitalWrite(red2,LOW);
		delay(100);
                digitalWrite(red1,LOW);
		delay(100);
		digitalWrite(red2,HIGH);
		delay(100);
	}
	else
	{
                digitalWrite(red1,LOW);
                digitalWrite(red2,LOW);
		digitalWrite(yellow,HIGH);
	}
}
