int ldrPin = 34;
int ledPin = 2;

int ldrValue = 0;
int threshold = 2000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  ldrValue = analogRead(ldrPin);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Light ON");
  } 
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Light OFF");
  }

  delay(1000);
}
