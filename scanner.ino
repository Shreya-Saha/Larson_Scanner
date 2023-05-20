int time = 100;           
void setup() 
{
  for (int Pin = 2; Pin < 8; Pin++) 
  {
    pinMode(Pin, OUTPUT);
  }
}

void loop() 
{
  for (int Pin = 2; Pin < 8; Pin++) 
  {
    digitalWrite(Pin, HIGH);
    delay(time);
    digitalWrite(Pin, LOW);
  }


  for (int Pin = 7; Pin >= 2; Pin--) 
  {
    digitalWrite(Pin, HIGH);
    delay(time);
    digitalWrite(Pin, LOW);
  }
}