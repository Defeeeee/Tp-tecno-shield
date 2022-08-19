// C++ code
//
int counter;

int counter2;

int counter3;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  for (counter = 0; counter < 10; ++counter) {
    digitalWrite(2, HIGH);
    delay(1000); // 1 sec
    digitalWrite(2, LOW);
    delay(500); // 500 ms
  }
  for (counter2 = 0; counter2 < 5; ++counter2) {
    digitalWrite(3, HIGH);
    delay(1000); // 1 sec
    digitalWrite(3, LOW);
    delay(500); // 500 ms
  }
  for (counter3 = 0; counter3 < 2; ++counter3) {
    digitalWrite(4, HIGH);
    delay(1000); // 1 sec
    digitalWrite(4, LOW);
    delay(500); // 500 ms
  }
}

//Link: https://www.tinkercad.com/things/2NW9q7cWW4V-copy-of-arduino-basico/editel?sharecode=H7QH964lViy3CGwoBipQVqQqi_0ZkZUyZVRap-ibwCg