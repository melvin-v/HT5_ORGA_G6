void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();
    if (data == '1') {
      digitalWrite(ledPin, HIGH);
    }
    else if (data == '0') {
      digitalWrite(ledPin, LOW);
    }
  }
}