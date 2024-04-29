const int elm11 = 8;  //ELECTROMAGNET 1 PIN 1 
const int elm12 = 7;  //ELECTROMAGNET 1 PIN 2 
const int elm21 = 6;  //ELECTROMAGNET 2 PIN 1
const int elm22 = 5;  //ELECTROMAGNET 2 PIN 2
//const int hall_output = A0; //HALL SENSOR TO PIN A0 FOR ANALOG OUTPUT
//const int hall_dig = 2;
//int step_velocity = 1; //how often to get a new value from the sensor
int del = 200;

void sw_polarity()
{

 //positive polarity
    digitalWrite(elm11, HIGH);
    digitalWrite(elm12, LOW);
	    
    digitalWrite(elm21, HIGH);
    digitalWrite(elm22, LOW);
    
    delay(del);
  
 //negative polarity
    digitalWrite(elm11, LOW);
    digitalWrite(elm12, HIGH);
  
    digitalWrite(elm21, LOW);
    digitalWrite(elm22, HIGH);

    delay(del);
}

/*void sw_polarity(float hallValue)
{
  if(hallValue > 2.45)
  {
    	//positive polarity
	  digitalWrite(elm11, HIGH);
  	digitalWrite(elm12, LOW);
    
    digitalWrite(elm21, HIGH);
  	digitalWrite(elm22, LOW);
    
  }else 
  {
    	//negative polarity
    digitalWrite(elm11, LOW);
    digitalWrite(elm12, HIGH);
  
    digitalWrite(elm21, LOW);
    digitalWrite(elm22, HIGH);
  } 
}*/

void setup()
{
  //set the electromagnets control pins as outputs
  Serial.begin(9600);
  pinMode(elm11, OUTPUT);
  pinMode(elm12, OUTPUT);
  pinMode(elm21, OUTPUT);
  pinMode(elm22, OUTPUT);
  //pinMode(hall_output, INPUT);
  //pinMode(hall_dig, INPUT);
}
void loop()
{
  //float hallValue = analogRead(hall_output); //read the analog value
  //int digValue = digitalRead(hall_dig);
  
  //Serial.print("Analog Value: ");
  //Serial.println(hallValue);
  
  //float voltage = hallValue * (5.0 / 1023.0);

  sw_polarity(); //switch the polarity of the electromagnets
  //sw_polarity();
  
  //delay(step_velocity * 1000);
}

