/*

  Blinking 2 LEDs alternately

*/ 

void setup() {                
  
// We'll need 2 pins, one for each LED we want to control independently
// The pin numbers in the code need to match with the pins you've connected to the breadboard
  pinMode(13, OUTPUT);     
  pinMode(11, OUTPUT);
}

void loop() {
  
  // Turn one LED on and turn the other off
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  
  // Wait 1 second
  delay(1000);
  
  // Turn the first LED off and the other one on
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  
  // Wait 1 second
  delay(1000);
}

