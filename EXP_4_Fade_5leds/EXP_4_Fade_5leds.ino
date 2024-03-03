int led[]={3,5,6,9,10};
int ledLoop=5;

void setup(){

  for(int i=0;i<ledLoop;i++){
    pinMode(led[i],OUTPUT);
    }
  }

void loop(){
  for(int i=0;i<ledLoop;i++){
    FadeAndBrighten(led[i]);
    }
  }
void FadeAndBrighten(int ledpin){
  for(int brightness=0;brightness<=255;brightness++){
    analogWrite(ledpin,brightness);
    delay(10);
    }
    delay(50);

  for(int brightness=255;brightness>=0;brightness--){
    analogWrite(ledpin,brightness);
    delay(10);
    }
    delay(200);
  }









  
