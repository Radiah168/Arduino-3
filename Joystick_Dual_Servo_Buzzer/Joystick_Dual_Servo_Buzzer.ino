#include<Servo.h>
Servo Xservo;
Servo Yservo;
int xpin=A0;
int ypin=A2;
int spin=9;
int buzzpin=7;
int XSpin=4;
int YSpin=3;
int xval;
int yval;
int sval;
int WVx;
int WVy;
int dt=500;

void setup() {
  Serial.begin(9600);
  pinMode(xpin,INPUT);
  pinMode(ypin,INPUT);
  pinMode(spin,INPUT);
  pinMode(XSpin,OUTPUT);
  pinMode(YSpin,OUTPUT);
  pinMode(buzzpin,OUTPUT);
  Xservo.attach(XSpin);
  Yservo.attach(YSpin);
  digitalWrite(spin,HIGH);

}

void loop() {
  xval=analogRead(xpin);
  WVx=(180./1023.)*xval;
  yval=analogRead(ypin);
  WVy=(180./1023.)*yval;
  xval=analogRead(xpin);

  Xservo.write(WVx);
  Yservo.write(WVy);

  sval=digitalRead(spin);
  Serial.print("x value=");
  Serial.print(xval);
  Serial.print(" y value=");
  Serial.print(yval);
  Serial.print(" state of switch is=");
  Serial.println(sval);
  delay(dt);

  if(sval==0){
    digitalWrite(buzzpin,HIGH);
  }
  else{
    digitalWrite(buzzpin,LOW);
  }
}
