const int ledPin1 = 8;
const int ledPin2 = 9;
const int ledPin3 = 10;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  analogWrite(ledPin1, 200);  // Define o valor para o brilho no LED 1
  delay(3000);
  analogWrite(ledPin1, 0);    // Desliga o LED 1 (Verde)
  delay(100);
  
  analogWrite(ledPin2, 200);  // Define o valor para o brilho no LED 2
  delay(500);
  analogWrite(ledPin2, 0);    // Desliga o LED 2 (Amarelo)
  delay(100);
  
  analogWrite(ledPin3, 200);  // Define o valor para o brilho no LED 3
  delay(3000);
  analogWrite(ledPin3, 0);    // Desliga o LED 3 (Vermelho)
  delay(100);
}
