int btnPins[8] = {2,3,4,5,6,7,8,9};
const char* btnNames[8] = {
  "UP", "DOWN", "LEFT", "RIGHT",
  "A", "B", "SELECT", "START"
};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 8; i++) {
    pinMode(btnPins[i], INPUT_PULLUP);
  }

  Serial.println("NES Controller Test Ready");
}

void loop() {
  for (int i = 0; i < 8; i++) {
    if (digitalRead(btnPins[i]) == LOW) {
      Serial.print(btnNames[i]);
      Serial.println(" pressed");
      delay(150); // simple debounce
    }
  }
}
