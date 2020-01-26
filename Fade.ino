int ledGreen = 13;
int ledBlue = 12;
int ledRed = 11;
int buttonGreen = 2;
int buttonBlue = 3;
int buttonRed = 4;

  void setup(){
    pinMode(ledGreen,OUTPUT);
    pinMode(ledBlue,OUTPUT);
    pinMode(ledRed, OUTPUT);

    pinMode(buttonGreen,INPUT);
    pinMode(buttonBlue,INPUT);
    pinMode(buttonRed, INPUT);
  }

  void loop(){
    if(digitalRead(buttonGreen) == HIGH){
      digitalWrite(ledGreen,1);
      }else{
        digitalWrite(ledGreen,0);
        }
    if(digitalRead(buttonBlue) == HIGH){
      digitalWrite(ledBlue,1);
      }else{
        digitalWrite(ledBlue,0);
      }
    if(digitalRead(buttonRed) == HIGH){
      digitalWrite(ledRed,1);
      }else{
        digitalWrite(ledRed,0);
      }
}
