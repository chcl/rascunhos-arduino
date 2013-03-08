// leitura simples

void setup() {
  // comunicacao
  Serial.begin(9600);
}

void loop() {
  // imprime em linha o valor no pino analogico 5
  Serial.println(analogRead(A5));
  
  delay(28);
}
