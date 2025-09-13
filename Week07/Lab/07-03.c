// Lab 07-03 Triangle

#include <stdio.h>
#include <math.h>

double perimeter(double a, double b, double c);
double area(double a, double b, double c);

int main() {
    double a, b, c;
    scanf("%lf\n%lf", &a, &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("Perimeter: %.2lf\nArea: %.2lf", perimeter(a, b, c), area(a, b, c));
    return 0;
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    return 0.25 * (b + b) * a;
}
