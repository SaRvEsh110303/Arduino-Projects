int LDRPin = A0;
int ledPins[] = {2, 3, 4, 5, 6};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  int sensorValue = analogRead(LDRPin);


  int lowThreshold = 450;
  int highThreshold = 500;
  int ledLevel = map(sensorValue, lowThreshold, highThreshold, 0, 4);

  for (int i = 0; i < 5; i++) {
    if (i <= ledLevel) {
      digitalWrite(ledPins[i], LOW);
    } else {
      digitalWrite(ledPins[i], HIGH);
    }
  }

  delay(100);
}
