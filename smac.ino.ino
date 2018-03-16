long duration,distance;
char str;
int right_motor_neg=2;
int right_motor_plus=3;
int left_motor_neg=4;
int left_motor_plus=5;
int ir_pin=6;
int pintrig=11;
int pinecho=12;
int gpiopin1=8;
int gpiopin2=9;
void setup()
{
    pinMode(right_motor_neg,OUTPUT);   // low for right motor
    pinMode(right_motor_plus,OUTPUT);   // HIGH for right motor
    pinMode(left_motor_neg,OUTPUT);    //low left motor
    pinMode(left_motor_plus,OUTPUT);    //high left motor
    pinMode(ir_pin,INPUT);    //IR input
    pinMode(pintrig,OUTPUT);
    pinMode(pinecho,INPUT);
    pinMode(gpiopin1,INPUT);
    pinMode(gpiopin2,INPUT);
   Serial.begin(9600);
}
void loop()
{
    if(digitalRead(gpiopin1)== HIGH && digitalRead(gpiopin2) == LOW)
    {
        digitalWrite(right_motor_neg,LOW);
        digitalWrite(right_motor_plus,HIGH);
        digitalWrite(left_motor_neg,LOW);
        digitalWrite(left_motor_plus,HIGH);
    }
    if(digitalRead(gpiopin1)== HIGH && digitalRead(gpiopin2) == HIGH)
    {
        digitalWrite(right_motor_neg,HIGH);
        digitalWrite(right_motor_plus,HIGH);
        digitalWrite(left_motor_neg,HIGH);
        digitalWrite(left_motor_plus,HIGH);              
    }
    if(digitalRead(gpiopin1)== LOW && digitalRead(gpiopin2) == HIGH)
    {
        digitalWrite(right_motor_neg,HIGH);
        digitalWrite(right_motor_plus,LOW);
        digitalWrite(left_motor_neg,HIGH);
        digitalWrite(left_motor_plus,LOW);
    }
    digitalWrite(pintrig,HIGH);
    delay(100);
    digitalWrite(pintrig,LOW);
    duration=pulseIn(pinecho,HIGH);
    distance=(duration/2)/29;
    Serial.println(distance); 
    if(distance <=10)
    {
        while(digitalRead(ir_pin)==LOW)
        {
               digitalWrite(right_motor_neg,HIGH);
               digitalWrite(right_motor_plus,LOW);
               digitalWrite(left_motor_neg,HIGH);
               digitalWrite(left_motor_plus,LOW);
      
        }
    }
}

