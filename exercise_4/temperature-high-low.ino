/*

  Turn red LED on if above 27C, turn green LED on if below 27C

*/ 

int ledRed = 13;
int ledGreen = 11;

void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

void loop() {

    int reading = analogRead(A0);
    float voltage = reading*(5.0/1024.0);
    float temperature = (voltage - 0.4)/0.0195;

    if (temperature > 27.0)
    {
      digitalWrite(ledRed,HIGH);
      digitalWrite(ledGreen,LOW);
    }
    else
    {
      digitalWrite(ledGreen,HIGH);
      digitalWrite(ledRed,LOW);
    }  
  
    delay(500);
    
}


