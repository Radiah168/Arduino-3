int xpin = A0;
int ypin = A2;
int spin = 9;
int xval;
int yval;
int sval;
int dt=500;

void setup() {
Serial.begin(9600);
pinMode(xpin,INPUT);
pinMode(ypin,INPUT);
pinMode(spin,INPUT);
digitalWrite(spin,HIGH);
}

void loop() {
  xval=analogRead(xpin);
  yval=analogRead(ypin);
  sval=digitalRead(spin);
  Serial.print("X value= ");
  Serial.print(xval);
  Serial.print( "Y value= ");
  Serial.print(yval);
  Serial.print( " State of switch is ");
  Serial.println(sval);
  delay(dt);

}
