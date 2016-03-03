/*

  Use the switch to toggle which LED is on.

*/ 


int switchPin = 7;
int redPin = 13;
int greenPin = 11;
boolean whichPin = true; // true = red pin on, false = green pin on

void setup() {

  pinMode(switchPin,INPUT);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
}

void loop() {

  int switch_value = digitalRead(switchPin); // read the switch value
  
  // if the switch gets pressed, change the value of whichPin from true to false (or vice versa)
  
  if(switch_value==LOW)
  {
    whichPin = !whichPin;  
  }
  
  // use the value of whichPin to decide which light gets turned on
  
  if(whichPin)
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


