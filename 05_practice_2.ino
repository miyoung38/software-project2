const int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);  
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, LOW);  
    delay(500);
    digitalWrite(ledPin, HIGH); 
    delay(500);
  }

  digitalWrite(ledPin, HIGH);    

  while (1) {
  }
}
