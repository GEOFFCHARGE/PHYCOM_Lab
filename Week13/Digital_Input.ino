const int BTN = 2;
const int LED = 3;

void setup()
{
    pinMode(BTN, INPUT);
    pinMode(LED, OUTPUT);
}

void loop()
{
    if (digitalRead(BTN) == 0)
    {
        digitalWrite(LED, 1);
    }
    else
    {
        digitalWrite(LED, 0);
    }
    delay(5);
}
