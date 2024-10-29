int led = 12; // pin where LED is connected
int pir_sensor = 2; // pin where PIR sensor is connected

void setup()
{
  pinMode(led, OUTPUT); // set LED pin for output
  pinMode(pir_sensor, INPUT); // set PIR sensor pin for reading input
  digitalWrite(led, LOW); // keep LED off initially
}

void loop()
{
  int sensor_val = digitalRead(pir_sensor); // read PIR sensor value
  if (sensor_val == HIGH) // if motion is detected
  {
    digitalWrite(led, HIGH); // turn LED on
  }
  else // if no motion is detected
  {
    digitalWrite(led, LOW); // turn LED off
  }
}
