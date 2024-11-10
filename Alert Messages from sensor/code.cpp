
int poten_pin = A1;
int ledpin = 12;
int threshold = 500;

void setup()
{
  pinMode(poten_pin, INPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  delay(1000);
}

void loop()
{
  int poten_val = analogRead(poten_pin);
  if (poten_val > threshold)
  {
    Serial.println(poten_val);
    Serial.println("Warning. Threshold value exceeded.");
    digitalWrite(ledpin, HIGH);
  }
  else
  {
    Serial.println(poten_val);
    Serial.println("Threshold maintained.");
    digitalWrite(ledpin, LOW);
  }
  delay(1000);
}
