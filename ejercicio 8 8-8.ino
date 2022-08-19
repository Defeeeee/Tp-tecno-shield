// C++ code
//
void setup()
{
  pinMode(12, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  if (digitalRead(12) == HIGH) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  delay(10); // delay momento

//Link: https://www.tinkercad.com/things/9PFO8ypeiZd-copy-of-arduino-basico/editel?sharecode=WCUCmNRwIOmWTK2sGxI10S4tqih7ihZ_HqE0kjPQGaA