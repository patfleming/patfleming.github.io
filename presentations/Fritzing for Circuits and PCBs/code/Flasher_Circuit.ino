const int buttonPin = 2; // Button connected to digital pin 2
const int ledPin = 13;   // LED connected to digital pin 13

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
  pinMode(ledPin, OUTPUT);          // Set the LED pin as output
}

void loop() {
  // Check if the button is pressed (active LOW)
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, HIGH); // Turn on the Flasher Circuit
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the Flasher Circuit
  }
}
