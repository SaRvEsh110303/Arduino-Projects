
int Led[] = {2, 3, 4, 5, 6};
int ForLed = 5;

int switchPin1 = 8;
int switchPin2 = 9;

void setup() {
  pinMode(switchPin1, INPUT_PULLUP);
  pinMode(switchPin2, INPUT_PULLUP);
  
  for (int i = 0; i < ForLed; i++) {
    pinMode(Led[i], OUTPUT);
  }
  
}

void loop() {
  
  if (digitalRead(switchPin1) == LOW) {
    runLEDs(100); 
  }

  
  if (digitalRead(switchPin2) == LOW) {
    runLEDsReverse(100); 
  }
}


void runLEDs(int n) {
  for (int i = 0; i < ForLed; i++) {
    digitalWrite(Led[i], HIGH);
    delay(n);
    digitalWrite(Led[i], LOW);
  }
}


void runLEDsReverse(int n) {
  for (int i = ForLed - 1; i >= 0; i--) {
    digitalWrite(Led[i], HIGH);
    delay(n);
    digitalWrite(Led[i], LOW);
  }
}
