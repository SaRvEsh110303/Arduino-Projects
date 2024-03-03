
// Define the pins for the LEDs
int Led[] = {2, 3, 4, 5, 6};
int LoopLed = 5;
int SwitchPin1=8;
int SwitchPin2=9;

void setup() {
  // Set the LED pins as OUTPUT
  for (int i = 0; i < LoopLed; i++) {
    pinMode(Led[i], OUTPUT);
  }
}

void loop() {
 
  for (int i = 0; i < LoopLed; i++) {
    digitalWrite(Led[i], HIGH);
    delay(300);  
    digitalWrite(Led[i], LOW);
  }

  // Run the LEDs from right to left
  for (int i = LoopLed - 1; i >= 0; i--) {
    digitalWrite(Led[i], HIGH);
    delay(300);  
    digitalWrite(Led[i], LOW);
  }
}
