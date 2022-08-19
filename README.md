# **TP programación**
### **Alumnos:** Juan Baader, Borja Izurieta y Federico Diaz Nemeth

### **Año:** 2022

### **Curso:** 2D
<br>

[Link a Github](https://github.com/Defeeeee/Tp-tecno)

## **Primer Ejercicio**

```c++
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
```

## **Segundo Ejercicio**

```c++
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
  
void loop() {
    
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
```

## **Tercer Ejercicio**

```c++
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

```

## **Cuarto Ejercicio**

```c++
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
```

## **Quinto Ejercicio**

```c++
void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
}

void loop()
{
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(500);
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(500);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(500);
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(500);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(500);
    digitalWrite(4, HIGH);
    delay(1000);
    digitalWrite(4, LOW);
    delay(500);
}
```

## **Sexto Ejercicio**

```c++
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
```

## **Septimo Ejercicio**

```c++
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
```

## **Octavo Ejercicio**

```c++
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
}
```

## **Noveno Ejercicio**

```c++
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
```

## **Decimo Ejercicio**

```c++
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
```
