const int tempPin = A0;

int count = 0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int sensorValue = analogRead(tempPin);
    float voltage = (sensorValue * 5.0 / 1023.0) * 100.0;
    Serial.print("Temperature ");
    Serial.print(count++);
    Serial.print(": ");
    Serial.print(voltage);
    Serial.println(" C");
    delay(10);
}
