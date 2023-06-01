const int ledPin1 = 11;

void setup() {
  pinMode(ledPin1, OUTPUT);
}

void loop() {
  analoglWrite(ledPin1, 200);

}
