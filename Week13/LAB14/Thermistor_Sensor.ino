const int therPin = A0;

int count = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    float sensorValue = analogRead(therPin);
    float vOut = sensorValue * 5.0 / 1023.0;
    float r = (vOut * 330.0) / (5 - vOut);
    float t = (298.15 * 4050.0) / (298.15 * log(r / 10000.0) + 4050.0);
    Serial.print("Temperature ");
    Serial.print(count++);
    Serial.print(": ");
    Serial.print(t - 273.15);
    Serial.println(" C");
    delay(1000);
}
