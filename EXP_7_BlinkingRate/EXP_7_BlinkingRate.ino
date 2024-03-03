const int ledPin = 4;  // Assuming you have connected the LED to digital pin 13
const int increaseSwitchPin = 6;  // Pin for the switch to increase blinking rate
const int decreaseSwitchPin = 7;  // Pin for the switch to decrease blinking rate

int blinkInterval = 1000;  // Initial blinking rate in milliseconds

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(increaseSwitchPin, INPUT_PULLUP);
  pinMode(decreaseSwitchPin, INPUT_PULLUP);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(blinkInterval);
  digitalWrite(ledPin, LOW);
  delay(blinkInterval);

  // Check the state of the switches
  if (digitalRead(increaseSwitchPin) == LOW) {
    increaseBlinkInterval();
  }

  if (digitalRead(decreaseSwitchPin) == LOW) {
    decreaseBlinkInterval();
  }
}

void increaseBlinkInterval() {
  blinkInterval = 1000;  // Increase the blinking rate by 100 milliseconds
  delay(200);  // Debounce delay to avoid rapid multiple presses
}

void decreaseBlinkInterval() {
  if (blinkInterval > 100) {  // Ensure blinking rate doesn't go below 100 milliseconds
    blinkInterval =100;  // Decrease the blinking rate by 100 milliseconds
    delay(200);  // Debounce delay to avoid rapid multiple presses
  }
}
