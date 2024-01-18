// Morse Code LED Blinker

const int ledPin = 13;  // Pin connected to the LED (use the onboard LED for most Arduino boards)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Define Morse code for the message "HELLO WORLD"
  String morseCode = ".... . .-.. .-.. ---   .-- --- .-. .-.. -..";

  // Call the function to blink the LED based on Morse code
  blinkMorseCode(morseCode);
  
  // Add a delay between messages
  delay(2000);
}

void blinkMorseCode(String code) {
  for (int i = 0; i < code.length(); i++) {
    char currentChar = code.charAt(i);

    if (currentChar == '.') {
      // Dot: Short blink
      digitalWrite(ledPin, HIGH);
      delay(200);
      digitalWrite(ledPin, LOW);
    } else if (currentChar == '-') {
      // Dash: Long blink
      digitalWrite(ledPin, HIGH);
      delay(600);
      digitalWrite(ledPin, LOW);
    } else if (currentChar == ' ') {
      // Space between words: Pause
      delay(600);
    }

    // Pause between dots and dashes within a letter
    delay(200);
  }
}
