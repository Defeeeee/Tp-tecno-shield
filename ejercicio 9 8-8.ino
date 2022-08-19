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
  if (analogRead(A0) > 500){
      digitalWrite( 2, HIGH);
      digitalWrite( 3, HIGH);
      digitalWrite( 4, HIGH);
    } else if (analogRead(A0) < 500) {
      digitalWrite( 2, LOW);
      digitalWrite( 3, LOW);
      digitalWrite( 4, LOW);
      }
}


//Link: https://www.tinkercad.com/things/4VspvGAPtFb-copy-of-arduino-basico/editel?sharecode=2B2FQqc5_Gf_fHPKFHGn7lWEmMgetsLjTMDAnsLylsM