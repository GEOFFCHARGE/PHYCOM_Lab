const int therPin = A0;

int count = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    float Read = (5.00 / 1023.00) * analogRead(therPin);
    float VR = 5 - Read;
    float RT = Read / (VR / 330);
    float ln = log(RT / 10000);
    float Temp = (1 / ((ln / 3977) + (1 / (25 + 273.15)))) - 273.15;
    Serial.print("Temperature ");
    Serial.print(count++);
    Serial.print(": ");
    Serial.print(Temp);
    Serial.println(" C");
    delay(1000);
}
