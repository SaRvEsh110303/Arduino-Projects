int led=3;
void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  }

void loop(){
  if(Serial.available()>0){
    char key = Serial.read();

    if(key=='A')
    analogWrite(3,0);
    else if(key=='B')
    analogWrite(3,63);
    else if(key=='C')
    analogWrite(3,127);
    else if(key=='D')
    analogWrite(3,190);
    else if(key=='E')
    analogWrite(3,255);
    }
  
  }
