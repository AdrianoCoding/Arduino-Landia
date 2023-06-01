const int ledPin1 = 13;
const int ledPin2 = 12; //Define as portas do led 1, 2 e 3
const int ledPin3 = 8;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  digitalWrite(ledPin1, HIGH);  // Liga o LED 1
  delay(3000);
  digitalWrite(ledPin1, LOW);    // Desliga o LED 1 (Verde)
  delay(100);
  
  digitalWrite(ledPin2, HIGH);  // Liga o LED 2
  delay(500);
  digitalWrite(ledPin2, LOW);    // Desliga o LED 2 (Amarelo)
  delay(100);
  
  digitalWrite(ledPin3, HIGH);  // Liga o LED 3
  delay(3000);
  digitalWrite(ledPin3, LOW);    // Desliga o LED 3 (Vermelho)
  delay(100);
}
