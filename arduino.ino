int count = 0;

void setup() {
  // Initialize the serial port
  Serial.begin(9600);
}

void loop() {
  // Print "Hello, world!" to the serial port
  if (count < 10) {
    Serial.println(String(count) + ": Hello, world! Arduino");
    count++;
  } else {
    // Delay for 10 seconds.
    delay(10000);
    count = 0;
  }
}
