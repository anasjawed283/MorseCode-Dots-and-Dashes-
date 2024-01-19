// Morse Code Sound Generator

const int buzzerPin = 9;  // Pin connected to the piezo buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Define Morse code for the message "HELLO WORLD"
  String morseCode = ".... . .-.. .-.. ---   .-- --- .-. .-.. -..";

  // Call the function to generate sound based on Morse code
  generateMorseCodeSound(morseCode);
  
  // Add a delay between messages
  delay(2000);
}

void generateMorseCodeSound(String code) {
  for (int i = 0; i < code.length(); i++) {
    char currentChar = code.charAt(i);

    if (currentChar == '.') {
      // Dot: Short beep
      beep(200);
    } else if (currentChar == '-') {
      // Dash: Long beep
      beep(600);
    } else if (currentChar == ' ') {
      // Space between words: Pause
      delay(600);
    }

    // Pause between dots and dashes within a letter
    delay(200);
  }
}

void beep(int duration) {
  tone(buzzerPin, 1000, duration);  // 1000 Hz frequency for a standard beep
  delay(duration + 50);  // Add a small delay to separate beeps
  noTone(buzzerPin);  // Stop the tone
}
