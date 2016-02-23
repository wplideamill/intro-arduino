/*

  Blink the LED until the button is pressed 4 times in a second.

*/ 

int switchPin = 7;
int LEDPin = 13;
int blinkTimer = millis();
int buttonTimer = millis();
boolean running = true;
boolean ledOn = true;
int buttonClicks = 0;

void setup() {

  pinMode(switchPin,INPUT);
  pinMode(LEDPin,OUTPUT);
  digitalWrite(LEDPin,LOW); // Initialize the LED to be off when the program starts
}

void loop() {

// as long as we haven't gotten the signal to stop, run the first section

  if (running)
  {
    
    // Check our timers and counter
    
    int currentTime = millis(); // establish current time 
    
    if (currentTime >= blinkTimer + 500) // if it's been more than 0.5 seconds since the blink timer reset
    {
      ledOn = !ledOn; // change the state of the LED
      blinkTimer = currentTime;  // reset the blink timer
    }

    if (currentTime >= buttonTimer + 1000)  // if it's been more than 1 second since the first button press
    {
      buttonClicks = 0;  // reset the button counter
    }    
    
    if (buttonClicks == 0) // if we haven't counted any button clicks yet
    {
      buttonTimer = currentTime;  // reset the button timer
    }
    
  
    // turn the LED on or off depending on the variable ledOn
  
    if (ledOn)
    {
      digitalWrite(LEDPin,HIGH);
    }
    else
    {
      digitalWrite(LEDPin,LOW);
    }
  
    // check for button presses and count them
  
    if (digitalRead(switchPin,LOW)
    {
      buttonClicks = butonClicks + 1;
    }
    
    // check to see if it's time to turn off the blinker
    
    if (buttonClicks >= 4)
    {
      running=false;
      for (int i=0; i < 4; i++){
        digitalWrite(LEDPin,HIGH);
        delay(100);
        digitalWrite(LEDPin,LOW);
        delay(100);
      }
    }
    
    delay(100);  // delay to prevent over-counting clicks.
    
  }
  
// Once we've gotten the 'stop' signal, keep the LED off  
  
  if (!running)
  {
    digitalWrite(LEDPin,LOW);
  }
  
}


