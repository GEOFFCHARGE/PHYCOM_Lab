const int BTN_RED = 4;
const int BTN_GREEN = 5;
const int BTN_BLUE = 6;

const int PIN_RED = 8;
const int PIN_GREEN = 9;
const int PIN_BLUE = 10;

void setup()
{
    pinMode(BTN_RED, INPUT);
    pinMode(BTN_GREEN, INPUT);
    pinMode(BTN_BLUE, INPUT);
    
    pinMode(PIN_RED, OUTPUT);
    pinMode(PIN_GREEN, OUTPUT);
    pinMode(PIN_BLUE, OUTPUT);
}

void loop()
{
    if (digitalRead(BTN_RED) == 0)
    {
        digitalWrite(PIN_RED, 0);
    }
    else
    {
        digitalWrite(PIN_RED, 1);
    }
    if (digitalRead(BTN_GREEN) == 0)
    {
        digitalWrite(PIN_GREEN, 0);
    }
    else
    {
        digitalWrite(PIN_GREEN, 1);
    }
    if (digitalRead(BTN_BLUE) == 0)
    {
        digitalWrite(PIN_BLUE, 0);
    }
    else
    {
        digitalWrite(PIN_BLUE, 1);
    }
    delay(5);
}
