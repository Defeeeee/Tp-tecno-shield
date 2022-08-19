// C++ code
//
void setup() {
  pinMode( 2, OUTPUT);
  pinMode( 3, OUTPUT);
  pinMode( 4, OUTPUT);
  pinMode( A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
  if (analogRead(A0) < 500){
      digitalWrite(4, HIGH);
      delay(5000);
      digitalWrite(3, HIGH);
      delay(1000);
      digitalWrite(4, LOW);
      delay(3000);
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
      delay(5000);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      delay(3000);
      digitalWrite(3, LOW);
    } else if (analogRead(A0) > 500) {
      digitalWrite(3, HIGH);
      delay(1000);
      digitalWrite(3, LOW);
      delay(1000);
      }
}

//Link: https://www.tinkercad.com/things/9AojMd2HxnN-copy-of-arduino-basico/editel?sharecode=ZjYPZfYZ1H9A5hMo7bwijB1wXJgcIFYJtoVqYl0i2-0