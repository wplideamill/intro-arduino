/*

  Making the LED dimmer
  
  The LED can be turned on and off so fast that you can't see the actual on/off change.
  However, because it is off for a while, it won't seem as bright when you're looking at it.
  Experiment with changing the delay values and see how it affects brightness.

*/
void setup() {
  
  pinMode(13, OUTPUT);
  
}

void loop() {

  digitalWrite(13, HIGH);
  delay(1);               // Increase this delay to make the LED brighter
  digitalWrite(13, LOW);
  delay(1);               // Increase this delay to make the LED dimmer
  
}
