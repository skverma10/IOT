int melody[] = {262,294,330,394,494,622,740};
int noteDurations[] = {4, 8, 8, 4,4,4,4,4 };
void setup() 
{
for (int thisNote = 0; thisNote < 8; thisNote++) 
{
  
int noteDuration = 1000/noteDurations[thisNote];
tone(8, melody[thisNote],noteDuration);
delay(noteDuration +30);
}
}
void loop()
{
  
}
