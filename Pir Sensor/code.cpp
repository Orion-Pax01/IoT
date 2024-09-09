
int led = 11; //pin where LED is connected
int pir_sensor = 1; //pin where pir sensor is connected

void setup()
{
  pinMode(led, OUTPUT); //set LED pin for output
  pinMode(pir_sensor, INPUT); //set pir sensor pin for reading input
  digitalWrite(led, LOW); //keep LED off 
}

void loop()
{
  int sensor_val = digitalRead(pir_sensor); //store the values(signals) read from pir sensor into a variable
  if (sensor_val == 1) //if motion is detected 
  {
    digitalWrite(led, HIGH); //turn LED on
  }
} 
