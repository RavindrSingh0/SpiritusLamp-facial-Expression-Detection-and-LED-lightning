// Define pin numbers for two LEDs
#define LED_PIN_1  6
#define LED_PIN_2  7

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set LED pins as output
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);

  // Initialize LEDs to 'off'
  digitalWrite(LED_PIN_1, LOW);
  digitalWrite(LED_PIN_2, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    // Read the incoming command
    char command = Serial.read();

    if (command == 'H') { // Happy
      setColor(LED_PIN_1, HIGH); // Turn on green LED
      setColor(LED_PIN_2, LOW);  // Turn off blue LED
    } else if (command == 'S') { // Sad
      setColor(LED_PIN_1, LOW);   // Turn off green LED
      setColor(LED_PIN_2, HIGH);  // Turn on blue LED
    }
    // Add more conditions for other emotions as needed
  }
}

// Function to set LED color
void setColor(int pin, int state) {
  digitalWrite(pin, state); // Set LED state
}
