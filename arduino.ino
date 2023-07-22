const int ledPin = 1;

void setup() {
  pinMode(ledPin, OUTPUT);  // Set the pin as output.
}

void loop() {
  blinkLED();
}

void blinkLED() {
  digitalWrite(ledPin, HIGH);  // Turn on the LED on.
  delay(500);                 // Delay for 0.5 seconds.
  digitalWrite(ledPin, LOW);  // Turn on the LED on.
  delay(500);
}
