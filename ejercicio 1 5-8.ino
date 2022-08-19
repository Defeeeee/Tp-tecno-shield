// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH); // se prenden todas las luces
  delay(5000); // 5 secs
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW); // se apagan todas las luces
  delay(1000); // 1 sec
}

//Link: https://www.tinkercad.com/things/bHsH3yKFx6O-ejercicio-1-58/editel?sharecode=ldfgpYcm7HYUO7wJWzcmJeTFEEt5oWc_B9PEdA5ddsc