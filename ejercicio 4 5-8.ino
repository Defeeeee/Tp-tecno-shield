// C++ code
//
void setup(){
	pinMode(2, OUTPUT);
  	pinMode(3, OUTPUT);
  	pinMode(4, OUTPUT);
  	pinMode(6, OUTPUT);
}

void loop(){
	digitalWrite(4, HIGH);
  	delay(10000);
  	digitalWrite(3, HIGH);
  	delay(1000);
    digitalWrite(4, LOW);
  	delay(3000);
  	digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
  	tone(6, 523, 10000);
  	delay(10000);
   	digitalWrite(2, LOW);
  	digitalWrite(3, HIGH);
  	delay(3000);
  	digitalWrite(3, LOW);
}

//Link: https://www.tinkercad.com/things/61YXpF4S5Go-copy-of-ejercicio-3/editel?sharecode=uvuKft4Go8NFf0heRSSKTGU8pxacpaQDgqbwBgHsQvU