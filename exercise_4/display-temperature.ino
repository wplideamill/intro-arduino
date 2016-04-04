/*

  Output the temperature to the serial console

*/ 


void setup() {

  Serial.begin(9600);
}

void loop() {

    int reading = analogRead(A0);
    float voltage = reading*(5.0/1023.0);
    float temperature = (voltage - 0.4)/0.0195;

    Serial.println(temperature);
  
    delay(1000);
    
}

