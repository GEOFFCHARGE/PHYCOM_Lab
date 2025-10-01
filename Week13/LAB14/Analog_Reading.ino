const int ledPin = 3;
const int potPin = A0;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    int potValue = analogRead(potPin);
    int brightness = potValue / 4;
    analogWrite(ledPin, brightness);
}
