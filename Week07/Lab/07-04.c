// Lab 07-04 Temperature

#include <stdio.h>
#include <ctype.h>

double celciusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main() {
    double temperature;
    char format;
    scanf("%lf %c", &temperature, &format);
    if (tolower(format) == 'c') {
        printFarenheit(celciusToFahrenheit(temperature));
    }
    else {
        printCelcius(fahrenheitToCelcius(temperature));
    }
    return 0;
}

double celciusToFahrenheit(double celcius) {
    double f;
    f = 32 + celcius * (180.0 / 100.0);
    return f;
}

double fahrenheitToCelcius(double fahrenheit) {
    double c;
    c = (fahrenheit - 32) / (180.0 / 100.0);
    return c;
}

void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}
