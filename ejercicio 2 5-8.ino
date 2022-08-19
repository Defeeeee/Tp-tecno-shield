// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
  
  void loop(){
    
  digitalWrite(2, HIGH); // se prende luz 2
  delay(2000); // 2 segundos
  digitalWrite(3, HIGH); // se prende luz 3
  delay(2000); // 2 segundos
  digitalWrite(4, HIGH); // se prende luz 4
  delay(2000); // 2 segundos
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW); // se apagan todas las luces
  delay(2000); // 2 segundos
}

// Link: https://www.tinkercad.com/things/hXTJPg4lqFO-copy-of-arduino-basico/editel?sharecode=Xhvs5cTszSCDKYypA4ZRppI5nR7WWrGMgMT00gGyF0c