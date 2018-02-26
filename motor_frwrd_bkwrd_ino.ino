int motorpin_plus=12;
int motorpin_neg=13;
int inputpin=4;
int str;
void setup()
{
	pinMode(motorpin_plus,OUTPUT);
	pinMode(motorpin_neg,OUTPUT);
        //Serial.begin(9600);
        pinMode(inputpin,INPUT);
}
void loop()
{
                str=digitalRead(inputpin);
		if(str == HIGH)
		{
			//str=Serial.read();
                        //if(str != 10 && str != 13)
                    //    {
                        //Serial.println(str);
			//if(str == 'f')
		//	{
				digitalWrite(motorpin_plus,HIGH);
				digitalWrite(motorpin_neg,LOW);
		//	}
			//else if(str == 'b')
		//	{
			//	digitalWrite(motorpin_plus,LOW);
			//	digitalWrite(motorpin_neg,HIGH);
		//	}
                        //else{
                         // Serial.print("here");
                          //digitalWrite(motorpin_plus,HIGH);
		       //   digitalWrite(motorpin_plus,HIGH);
                //        }
        //                }
		}
                if(str == LOW)
                {
                              digitalWrite(motorpin_plus,HIGH);
                              digitalWrite(motorpin_neg,HIGH);
                }
                              
}
