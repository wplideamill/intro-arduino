/*

  Read the input from a switch, then make the LED blink twice.

*/ 

// Instead of hard-coding the pin numbers, we can use variables and assign their values in one place
// This makes it much easier to update if we change the pins we're using later

int switchPin = 7;
int LEDPin = 13;

void setup() {

  pinMode(switchPin,INPUT);
  pinMode(LEDPin,OUTPUT);
  digitalWrite(LEDPin,LOW); // Initialize the LED to be off when the program starts
}

void loop() {

  int switch_value = digitalRead(switchPin);
  if(switch_value==LOW)
  {
   digitalWrite(LEDPin,HIGH);
   delay(1000);
   digitalWrite(LEDPin,LOW);
   delay(1000);
   digitalWrite(LEDPin,HIGH);
   delay(1000);
   digitalWrite(LEDPin,LOW);
   delay(1000);   
  }
  delay(100);
}

