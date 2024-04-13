const int elm11 = 8;  //ELECTROMAGNET 1 PIN 1 
const int elm12 = 7;  //ELECTROMAGNET 1 PIN 2 
const int elm21 = 6;  //ELECTROMAGNET 2 PIN 1
const int elm22 = 5;  //ELECTROMAGNET 2 PIN 2

void setup() {
  // Set the motor control pins as outputs
  pinMode(elm11, OUTPUT);
  pinMode(elm12, OUTPUT);
  pinMode(elm21, OUTOUT);
  pinMode(elm22, OUTPUT);
}

void loop() {
  // Turn on electromagnet in one polarity
  digitalWrite(elm11, HIGH);
  digitalWrite(elm12, LOW);

  digitalWrite(elm21, HIGH);
  digitalWrite(elm22, LOW);

  delay(2000);  // Wait for 2 seconds
  
  // Change polarity of electromagnet
  digitalWrite(elm11, LOW);
  digitalWrite(elm12, HIGH);

  digitalWrite(elm21, LOW);
  digitalWrite(elm22, HIGH);
  
  delay(2000);  // Wait for 2 seconds
}
