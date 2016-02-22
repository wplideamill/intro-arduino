/*

  Use the switch to toggle which LED is on.

*/ 


int switchPin = 7;
int redPin = 13;
int greenPin = 11;
int whichPin = 1; // 1 = red pin on, -1 = green pin on

void setup() {

  pinMode(switchPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
}

void loop() {

  int switch_value = digitalRead(switchPin); // read the switch value
  
  // if the switch gets pressed, change the value of whichPin from 1 to -1 (or vice versa)
  
  if(switch_value==LOW)
  {
    whichPin = -whichPin;  
  }
  
  // use the value of whichPin to decide which light gets turned on
  
  if(whichPin>0)
  {
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
  }
  else
  {
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
  }
  
  delay(200);
}


