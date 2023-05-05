// C++ code
//
const int led=1;
const int led1=2;
const int led2=3;
void setup()
{
  pinMode(led, OUTPUT); 
  pinMode(led1, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop()
{
  digitalWrite( led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
  digitalWrite( led1, HIGH);
  delay(100);
   digitalWrite(led1, LOW);
  delay(100);
  digitalWrite( led2, HIGH);
 delay(100);
  digitalWrite(led2, LOW);
  
  delay(10); // Wait for 1000 millisecond(s)
  
}