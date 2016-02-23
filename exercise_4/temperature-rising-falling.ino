/*

  Turn red LED on if the temperature is rising, turn the green LED on if the temperature is falling

*/ 

int ledRed = 13;
int ledGreen = 11;
float previousTemperature = 0.0;

void setup() {
  pinMode(ledRed,OUTPUT);
  pinMode(ledGreen,OUTPUT);
}

void loop() {

    int reading = analogRead(A0);
    float voltage = reading*(5.0/1024.0);
    float temperature = (voltage - 0.4)/0.0195;

    if (temperature > previousTemperature)
    {
      digitalWrite(ledRed,HIGH);
      digitalWrite(ledGreen,LOW);
    }
    else
    {
      digitalWrite(ledGreen,HIGH);
      digitalWrite(ledRed,LOW);
    }  
    
    if (temperature == previousTemperature)
    {
      digitalWrite(ledGreen,LOW);
      digitalWrite(ledRed,LOW);
    }
    
    previousTemperature = temperature;
  
    delay(500);
    
}



