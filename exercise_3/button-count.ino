/*

Count the button presses, output to serial console

*/ 

int switchPin = 7;
int numPushes=0;

void setup() {
  pinMode(switchPin,INPUT);
  Serial.begin(9600);
}

void loop() {

  int switch_value = digitalRead(switchPin);

  if(switch_value==LOW)
  {
   numPushes = numPushes + 1;
   Serial.print("BUTTON PUSHED ");
   Serial.print(numPushes);
   Serial.println(" TIMES!");
   delay(250);
  }

}

