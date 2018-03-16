char str;
int right_motor_neg=2;
int right_motor_plus=3;
int left_motor_neg=4;
int left_motor_plus=5;
int ir_pin=6;
void setup()
{
    pinMode(right_motor_neg,OUTPUT);   // low for right motor
    pinMode(right_motor_plus,OUTPUT);   // HIGH for right motor
    pinMode(left_motor_neg,OUTPUT);    //low left motor
    pinMode(left_motor_plus,OUTPUT);    //high left motor
    pinMode(ir_pin,INPUT);    //IR input
   //Serial.begin(9600);
}
void loop()
{
    if(digitalRead(ir_pin) == HIGH)
    {
      digitalWrite(right_motor_neg,LOW);
      digitalWrite(right_motor_plus,HIGH);
      digitalWrite(left_motor_neg,LOW);
      digitalWrite(left_motor_plus,HIGH);  
    }
  else
    {
        digitalWrite(right_motor_neg,HIGH);
        digitalWrite(right_motor_plus,LOW);
        digitalWrite(left_motor_neg,HIGH);
        digitalWrite(left_motor_plus,LOW);
        delay(2000);
    }
}
