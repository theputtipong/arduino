const int ledPin = 13;
const int analogPin = A0;

void setup()
{
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(analogPin, INPUT);
}

void loop()
{
  CheckLDR();
}

void CheckLDR()
{
  int valLDR = analogRead(analogPin);
  if (valLDR < 300)
  {
    Serial.println(valLDR);
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    Serial.println(valLDR);
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}