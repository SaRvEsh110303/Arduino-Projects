int led[]={3,4,5,6};
int loopLed=4;
int switchPin = 8;
int counter=0;

void setup(){
  pinMode(switchPin,INPUT_PULLUP);
  for(int i=0;i<=loopLed;i++){
    pinMode(led[i],OUTPUT);
    }
  }

void loop(){
  if(digitalRead(switchPin)==LOW){
    delay(100);
    while(digitalRead(switchPin)==LOW){}
    incrementCounter();
    updateLeds();
    }
  }

void incrementCounter(){
  counter++;
  if(counter==16){
    counter=0;
    }
  }

void updateLeds(){
  for(int i=0;i<loopLed;i++){
  int bitValue=bitRead(counter,i);
  digitalWrite(led[i],bitValue);
  
    }
  }
