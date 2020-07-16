 #define TRIG 2
 #define ECHO 3
 #define RED 8 
 #define GREEN 9 
 #define BLUE 10
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long distance=pulseIn(ECHO, HIGH)/58.2;

  analogWrite(RED,0);
  analogWrite(GREEN,0);
  analogWrite(BLUE,0);
  if(distance <10){
    analogWrite(RED, 255);
  }else if(distance <20){
     analogWrite(GREEN, 255);
  }else if(distance <30){
     analogWrite(BLUE, 255);
  }
  delay(1000);
}
