#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte heart[8] =
{
    B00000,
    B01010,
    B11111,
    B11111,
    B11111,
    B01110,
    B00100,
    B00000
};

byte degree[8] =
{
    B00111,
    B00101,
    B00111,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000
};

const int tempPin = A0;

int count = 0;

void setup()
{
    lcd.init();
    lcd.createChar(0, heart);
    lcd.backlight();
    lcd.setCursor(5, 0);
    lcd.print("I");
    lcd.setCursor(7, 0);
    lcd.write(byte(0));
    lcd.setCursor(9, 0);
    lcd.print("IT");
    lcd.setCursor(0, 1);
    lcd.print("67070164");
    Serial.begin(9600);
}

void loop()
{
    lcd.createChar(1, degree);
    lcd.setCursor(9, 1);
    float sensorValue = analogRead(tempPin);
    float voltage = (sensorValue * (5.0 / 1023.0)) * 100.0;
    lcd.print(voltage);
    lcd.setCursor(14, 1);
    lcd.write(byte(1));
    lcd.print("C");
    delay(1000);
}
