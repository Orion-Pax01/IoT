
int poten_pin = A1;
int threshold = 767;

void setup()
{
  pinMode(poten_pin, INPUT);
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
  }
  else
  {
    Serial.println(poten_val);
    Serial.println("Threshold maintained.");
  }
  delay(1000);
}
