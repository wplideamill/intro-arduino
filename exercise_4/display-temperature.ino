/*

  Output the temperature to the serial port

*/ 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

    // put your main code here, to run repeatedly:
    int reading = analogRead(A0);
    float voltage = reading*(5.0/1024.0);
    float temperature = (voltage - 0.4)/0.0195;

    Serial.println(temperature);
  
    delay(1000);
    
}

