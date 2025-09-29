const int BTN = 2;
const int LED = 3;

void setup()
{
    pinMode(BTN, INPUT);
    pinMode(LED, OUTPUT);
}

void loop()
{
    if (digitalRead(BTN) == LOW)
    {
        digitalWrite(LED, HIGH);
    }
    else
    {
        digitalWrite(LED, LOW);
    }
    delay(5);
}
