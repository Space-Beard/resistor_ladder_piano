int notes[] = {262, 294, 330, 349};

void setup() {
  // Start serial
  Serial.begin(9600);
  
}

void loop() {
  // capture the analog reading and print the reading to serial
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  // Determine which button is being pressed and play the appropriate tone
  if (keyVal > 1020) {
    tone(8, notes[0]);
  }
  else if (keyVal >= 990 && keyVal <= 1010) {
    tone(8, notes[1]); 
  }
  else if (keyVal >= 500 && keyVal <= 530) {
    tone(8, notes[2]);
  }
  else if (keyVal >= 5 && keyVal <= 15) {
    tone(8, notes[3]);
  }
  else {
    noTone(8);
  }

}
