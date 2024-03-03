int led=3;
int ldr=A0;

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  }

void loop(){
  int sensorValue= analogRead(ldr);
  int blinkInterval=map(sensorValue,0,1023,1000,100);

  digitalWrite(led,HIGH);
  delay(blinkInterval);
  digitalWrite(led,LOW);
  delay(blinkInterval);

  Serial.print("Brightness: ");
  Serial.println(sensorValue);
  Serial.print(", Blink Interval: ");
  Serial.println(blinkInterval);

  delay(1000);
  }
