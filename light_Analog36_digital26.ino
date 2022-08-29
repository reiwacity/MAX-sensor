#include <M5Stack.h>

int analogRead_value = 0;
int digitalRead_value = 0;

void setup() {
  M5.begin();
  M5.Speaker.begin();
  M5.Speaker.mute();
  M5.Lcd.fillScreen(BLACK);

  M5.Lcd.setTextColor(WHITE, BLACK);
  M5.Lcd.setTextSize(2);

  pinMode(26, INPUT_PULLUP);
}

void loop() {
  analogRead_value = analogRead(36);
  digitalRead_value = digitalRead(26);
  
  M5.Lcd.setCursor(10, 10);
  M5.Lcd.printf("analog = %4d   ", analogRead_value);
  M5.Lcd.setCursor(10, 50);
  M5.Lcd.printf("digital = %d  ", digitalRead_value);
  delay(500);
}
