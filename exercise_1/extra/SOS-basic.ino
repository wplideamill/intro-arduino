/*
  SOS
  
  Blink the LED on Pin 13 in the SOS morse code pattern - 3 short, 3 long, 3 short
  
  This example essentially cuts-and-pastes the commands over and over for every blink.
  Can you think of a more efficient way to do this? You can refer to the Arduino Language Reference
  (https://www.arduino.cc/en/Reference/HomePage) to find commands that will help with this.
  
 */

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

// 3 short

  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  
// 3 long

  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1500);              // wait for a second and a half
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1500);              // wait for a second and a half
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1500);              // wait for a second and a half
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  
// 3 short

  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
  
// delay before the start of the next cycle

  delay(1500);
}

