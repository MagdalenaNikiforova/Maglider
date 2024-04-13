  int val = 0;
  const int hallSensorPin = A0; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    val = analogRead(hallSensorPin);
    float voltage = val * (5.0 / 1023.0);
    Serial.println(voltage);
    //delay(1000);

}
