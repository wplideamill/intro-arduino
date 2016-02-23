/*

  Fading the LED using delays
  (Code from http://www.rngtng.com/2009/05/17/arduino-fade-and-pulse-a-led-with-just-using-a-digitalport/#comment-687)
  
*/

int ledPin = 13;
int i=0;
boolean rise=true;
int period=1000;

void setup()
 {
 pinMode(ledPin, OUTPUT);
 }

void loop()
{
 if(i == period)
 {
  i=1;
  rise= !rise;
 }
 
 if(rise == false)
 {
  digitalWrite(13, LOW);
  delayMicroseconds(i);
  digitalWrite(13, HIGH);
  delayMicroseconds(period-i);
  i=i+1;
 }

 if(rise == true)
 {
  digitalWrite(13, LOW);
  delayMicroseconds(period-i);
  digitalWrite(13, HIGH);
  delayMicroseconds(i);
  i=i+1;
 }

}
