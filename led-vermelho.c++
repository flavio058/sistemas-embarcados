// C++ code
//
int led=8;
int but=2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led, INPUT);
}

void loop()
{
  int val=digitalRead(but);
  if (val==HIGH) {
    digitalWrite(led, LOW);
}
  else{
    digitalWrite(led, HIGH);
  }
  
}