// Include the necessary libraries
#include <Adafruit_NeoPixel.h>

// Define pin number and number of LEDs for NeoPixel RGB strip
#define LED_PIN    6
#define NUM_LEDS   60

// Initialize NeoPixel object with parameters
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize NeoPixel strip
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Check if data is available to read from serial port
  if (Serial.available() > 0) {
    // Read the incoming command
    char command = Serial.read();

    // Check the command and adjust NeoPixel strip colors accordingly
    if (command == 'H') { // Happy
      setColor(strip.Color(0, 255, 0)); // Green color
    } else if (command == 'S') { // Sad
      setColor(strip.Color(0, 0, 255)); // Blue color
    }
    // Add more conditions for other emotions as needed
  }
}

// Function to set NeoPixel strip color
void setColor(uint32_t color) {
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, color); // Set color for each LED in the strip
  }
  strip.show(); // Update the colors on the strip
}

