// C++ code
//
void setup(){
	pinMode(2, OUTPUT);
  	pinMode(3, OUTPUT);
  	pinMode(4, OUTPUT);
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
  	delay(10000);
  	digitalWrite(2, LOW);
  	digitalWrite(3, HIGH);
  	delay(3000);
  	digitalWrite(3, LOW);
}

//Link: https://www.tinkercad.com/things/5tiiLt85nU0-copy-of-eze-1/editel?sharecode=LzW0hYtgSviFJTWejCSlxxEkPM-YTRrPFViToMnoDYA
