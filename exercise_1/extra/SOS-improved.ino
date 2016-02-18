/*
  SOS - improved
  
  Blink the LED on Pin 13 in the SOS morse code pattern - 3 short, 3 long, 3 short
  
  This example uses 'For' loops to make the process of blinking the LED a little more efficient than in the SOS-basic program. These loops allow us to repeat a set of instructions without typing them out over and over again. You can read about the For loop at https://www.arduino.cc/en/Reference/For for more information.
  
 */


void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}


void loop() {

// 3 short
  for (int i=0; i < 3; i++){
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);              // wait for half a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(500);              // wait for half a second
  }
  
// 3 long

  for (int i=0; i < 3; i++){
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1500);              // wait for a second and a half
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(500);              // wait for half a second
  }
  
// 3 short

// 3 short
  for (int i=0; i < 3; i++){
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);              // wait for half a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(500);              // wait for half a second
  }
  
// delay before the start of the next cycle

  delay(1500);
}

