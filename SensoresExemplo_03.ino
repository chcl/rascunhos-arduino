// Sensores - Exemplo 3

const int ldr = A1;
const int buzzer = 2;
const int button =  3;


void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop() {
  int valLDR = analogRead(ldr);
  int valButton = digitalRead(button);

  Serial.println(valLDR);

  if (valLDR > 400) {
    tone(buzzer, 880);
  } else {
    noTone(buzzer);
  }
  
/*
  if (valButton == LOW) {
       tone(buzzer, 440);
  } else {
       noTone(buzzer);     
  }
*/
  delay(100);

}
