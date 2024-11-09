
int ledPin = 12;  // connect led to this pin on arduino

void setup() 
{
  pinMode(ledPin, OUTPUT);   // Set the LED pin as an output
  Serial.begin(9600);        // Start serial communication at 9600 baud rate
}

void loop() 
{
  if (Serial.available() > 0) 
  {      
    // Check if data is available on serial port
    char command = Serial.read();    // Read the command sent over serial
    if (command == '1') 
    {
      // If command is '1', turn on LED
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    } 
    else if (command == '0') 
    {     
      // If command is '0', turn off LED
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF");
    }
  }
}
