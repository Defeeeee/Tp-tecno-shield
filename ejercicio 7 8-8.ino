// C++ code
//
void setup() {
  pinMode( 2, OUTPUT);
}

void loop() {
  int i = 0;
  while(i < 5){
      digitalWrite(2, HIGH);
      delay(4000);
      digitalWrite(2, LOW);
      delay(4000);
      i += 1;
    }
  i = 0;
  while(i < 5){
      digitalWrite(2, HIGH);
      delay(2000);
      digitalWrite(2, LOW);
      delay(2000);
      i += 1;
    }
  i = 0;
  while(i < 5){
      digitalWrite(2, HIGH);
      delay(1000);
      digitalWrite(2, LOW);
      delay(1000);
      i += 1;
    }
}

//Link: https://www.tinkercad.com/things/2aBPUxqXnFi-copy-of-arduino-basico/editel?sharecode=G-9_gcSAJPjajFminnXwIm4q5Z7frZbrT7zbr0H-znw