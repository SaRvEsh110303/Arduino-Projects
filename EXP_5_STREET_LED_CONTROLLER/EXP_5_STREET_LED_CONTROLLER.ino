const int ldrPin = A0;          // LDR connected to analog pin A0
const int numLeds = 5;          // Number of LEDs
const int ledPins[] = {2, 3, 4, 5, 6};  // LED pins

int darkThreshold = 500;        // Adjust this threshold based on your environment

void setup() {
  pinMode(ldrPin, INPUT);
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Ensure all LEDs are initially off
  }
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);

  // Print light level to Serial Monitor (optional)
  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  // Map the light level to the number of LEDs
  int numLedsToTurnOn = map(lightLevel, 0, 1023, 0, numLeds);

  // Turn on the LEDs based on the mapped value
  for (int i = 0; i < numLeds; i++) {
    if (i < numLedsToTurnOn) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }

  delay(1000);  // Adjust the delay time as needed
}
