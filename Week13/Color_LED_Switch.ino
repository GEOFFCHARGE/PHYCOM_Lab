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
    if (digitalRead(BTN_RED) == LOW)
    {
        digitalWrite(PIN_RED, LOW);
    }
    else
    {
        digitalWrite(PIN_RED, HIGH);
    }
    if (digitalRead(BTN_GREEN) == LOW)
    {
        digitalWrite(PIN_GREEN, LOW);
    }
    else
    {
        digitalWrite(PIN_GREEN, HIGH);
    }
    if (digitalRead(BTN_BLUE) == LOW)
    {
        digitalWrite(PIN_BLUE, LOW);
    }
    else
    {
        digitalWrite(PIN_BLUE, HIGH);
    }
    delay(5);
}
