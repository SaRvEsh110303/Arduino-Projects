int led[] = {2, 3, 4, 5, 6};
int loopLed = 5;
char serialInput;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < loopLed; i++) {
    pinMode(led[i], OUTPUT);
    digitalWrite(led[i], LOW);
  }
}

void loop() {
  if (Serial.available() > 0) {
    serialInput = Serial.read();

    switch (serialInput) {
      case 'A':
        digitalWrite(led[0], HIGH);
        break;
      case 'B':
        digitalWrite(led[1], HIGH);
        break;
      case 'C':
        digitalWrite(led[2], HIGH);
        break;
      case 'D':
        digitalWrite(led[3], HIGH);
        break;
      case 'E':
        digitalWrite(led[4], HIGH);
        break;
      case 'F':
        for (int i = 0; i < loopLed; i++) {
          digitalWrite(led[i], LOW);
        }
        break;
      default:
        break;
    }
  }
}
