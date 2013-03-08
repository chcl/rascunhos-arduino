const int rele = 12; // pino do relé
int incomingByte;  // variavel que representa o sinal que entra

void setup() {
  // communication:
  Serial.begin(9600);
  //  rele como output
  pinMode(rele, OUTPUT);
}

void loop() {
  // checa se está entrando sinal
  if (Serial.available() > 0) {
    // le o ultimo sinal no buffer
    incomingByte = Serial.read();
    // se entra a capital H (ASCII 72), liga rele:
    if (incomingByte == 'H') {
      digitalWrite(rele, HIGH);
    } 
    // se entra L (ASCII 76), rele desligado:
    if (incomingByte == 'L') {
      digitalWrite(rele, LOW);
    }
  }
}
