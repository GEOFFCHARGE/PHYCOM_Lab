#include <stdlib.h>
#include <string.h>

const int segments[] = {2, 3, 4, 5, 6, 7, 8};
const int leftSegment = 11, rightSegment = 12;

const int digitPatterns[][7] =
{
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
};

const char text[] = "67070164";

void setup()
{
    Serial.begin(9600);
    for (int i = 0; i < 7; i++)
    {
        pinMode(segments[i], OUTPUT);
    }
    pinMode(leftSegment, OUTPUT);
    pinMode(rightSegment, OUTPUT);
}

void loop()
{
    for (int i = 0; i < strlen(text); i += 2)
    {
        int digit1 = text[i] - '0', digit2 = text[i + 1] - '0';
        showTwoDigits(digit1, digit2);
    }
}

void showTwoDigits(int digit1, int digit2)
{
    unsigned long startTime = millis();
    while (millis() - startTime < 1000)
    {
        displayDigit(digit1, rightSegment);
        delay(50);
        displayDigit(digit2, leftSegment);
        delay(50);
    }
}

void displayDigit(int digit, int activeSegment)
{
    digitalWrite(leftSegment, activeSegment == leftSegment ? HIGH : LOW);
    digitalWrite(rightSegment, activeSegment == rightSegment ? HIGH : LOW);

    for (int i = 0; i < 7; i++)
    {
        digitalWrite(segments[i], digitPatterns[digit][i] ? HIGH : LOW);
    }
}
