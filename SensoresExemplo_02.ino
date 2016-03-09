// Sensores - Exemplo 2

const int stemp = A0;
const int buzzer = 2;


void setup() {
  Serial.begin(9600);
  analogReference(INTERNAL); // 1.1V
}

void loop() {
  int valTemp = analogRead(stemp);
  float tempV = valTemp * 1.1 /1023.0;

  float tempC = tempV / 0.01;

  Serial.println(tempC);

  if (tempC > 25.0) {
    tone(buzzer, 880);
  } else {
    noTone(buzzer);
  }

  delay(100);

}
