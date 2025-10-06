#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int tempPin = A0;

void setup()
{
    lcd.init();
    lcd.backlight();
    Serial.begin(9600);
}

void loop()
{
    lcd.setCursor(0, 0);
    float sensorValue = analogRead(tempPin);
    float voltage = (sensorValue * (5.0 / 1023.0)) * 100.0;
    lcd.print(voltage, 2);
    delay(1000);
}
