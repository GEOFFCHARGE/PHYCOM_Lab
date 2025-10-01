const int ledPin1 = 5;
const int ledPin2 = 6;

int brightness1 = 0;
int brightness2 = 0;

int fadeOff1 = 0;
int fadeOff2 = 0;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
}

void loop()
{
    analogWrite(ledPin1, brightness1);
    analogWrite(ledPin2, brightness2);
    if (brightness1 > 255)
    {
        fadeOff1 = 1;
    }
    else if (!brightness1)
    {
        fadeOff1 = 0;
    }
    if (brightness2 > 255)
    {
        fadeOff2 = 1;
    }
    else if (!brightness2)
    {
        fadeOff2 = 0;
    }
    (!fadeOff1) ? brightness1++ : brightness1--;
    (!fadeOff2) ? brightness2 += 2 : brightness2 -= 2;
    delay(10);
}
