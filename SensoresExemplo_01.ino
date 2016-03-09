// Sensores - Exemplo 1

const int pot = A0;
const int buzzer = 2;
const int led1  = 6;
const int led2  = 7;
const int led3  = 8;

void setup() {
  Serial.begin(9600);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
}

void loop() {
  int valPot = analogRead(pot);
  Serial.println(valPot);


  if (valPot >  100) {
     digitalWrite(led1, HIGH);
  } else {
     digitalWrite(led1, LOW);
  }

  if (valPot >  512) {
     digitalWrite(led2, HIGH);
  } else {
     digitalWrite(led2, LOW);
  }

  if (valPot >  800) {
     digitalWrite(led3, HIGH);
  } else {
     digitalWrite(led3, LOW);
  }

   if (valPot >  1000) {
     tone(buzzer, 440);
  } else {
     noTone(buzzer);
  }
  delay(100);

}
