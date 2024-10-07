
int poten_pin = A1;
int buzzpin = 9;
int threshold = 500;

void setup()
{
  pinMode(poten_pin, INPUT);
  pinMode(buzzpin, OUTPUT);
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
    digitalWrite(buzzpin, HIGH);
  }
  else
  {
    Serial.println(poten_val);
    Serial.println("Threshold maintained.");
    digitalWrite(buzzpin, LOW);

  }
  delay(1000);
}
