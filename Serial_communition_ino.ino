int str,i,j;
void setup()
{
    Serial.begin(9600);
    pinMode(9,OUTPUT);
}
void blinking()
{
      digitalWrite(9,HIGH);
      delay(300);
      digitalWrite(9,LOW);
      delay(300);
                                 
}
void fading()
{
       for(i=0;i<=255;i+=10)
       {
          analogWrite(9,i);
          delay(100);
       }
       for(i=255;i>=0;i-=10)
       {
          analogWrite(9,i);
          delay(100);
       }                                 
}
void loop()
{
    //Serial.print("sachin ");
    //delay(5000);
    //Serial.print(Serial.available());
    if(Serial.available()>0)
    {
      //          Serial.print(Serial.available());                
         //       Serial.print("kumar ");
                str=Serial.read();  
           //     Serial.print(str);
                       
    
    if(str =='1')
        {
          digitalWrite(9,HIGH);
        }
        if(str =='2')
        {
          digitalWrite(9,LOW);
        }
        if(str =='3')
        {
          for(;;)
          {
            blinking();
            if(Serial.available())
            {
              str = Serial.read();
              if(str != 3)
              {
                break;
              }
            }
          }
        }
        if(str =='4')
        {
          fading();
        }  
}
