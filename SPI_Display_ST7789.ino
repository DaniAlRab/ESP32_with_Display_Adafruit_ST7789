#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

// Pins for SPI communication
#define TFT_CS    15
#define TFT_DC    2
#define TFT_RST   5
#define TFT_MOSI  23
#define TFT_SCLK  18

// Create an instance of the ST7789 display
Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // Initialize the SPI display
  tft.init(240, 320); // Initialize the display with width and height
  tft.setRotation(3); // Set the rotation to PORTRAIT_INVERTED (3 for portrait inverted mode)
  tft.fillScreen(ST77XX_BLACK); // Clear the screen with black color

  // Set text properties
  tft.setTextColor(ST77XX_WHITE); // Set text color to white
  tft.setTextSize(2); // Set text size

  // Display "Hello, World!"
  tft.setCursor(10, 100); // Set the cursor position (x, y)
  tft.println("Hello, World!"); // Print the text
}

void loop() {
  // Nothing to do here
}
