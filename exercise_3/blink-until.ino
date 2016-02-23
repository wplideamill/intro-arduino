/*

  Blink the LED until the button is pressed 4 times in a second.

*/ 

int switchPin = 7;
int LEDPin = 13;
int blinkTimer = millis();
boolean running = true;
int buttonClicks = 0;

void setup() {

  boolean ledOn = true;
  pinMode(switchPin,INPUT);
  pinMode(LEDPin,OUTPUT);
  digitalWrite(LEDPin,LOW); // Initialize the LED to be off when the program starts
}

void loop() {

  if (running)
  {
    
    int currentTime = millis();
    if (currentTime >= blinkTimer + 1000)
    {
      ledOn = !ledOn;
      blinkTimer = currentTime;
    }
  
    if (ledOn)
    {
      digitalWrite(LEDPin,HIGH);
    }
    else
    {
      digitalWrite(LEDPin,LOW);
    }
  
  if (digitalRead(switchPin,LOW)
  {
    buttonClicks = butonClicks + 1;
  }

}


