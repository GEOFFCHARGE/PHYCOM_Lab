// Lab 07-06 C

#include <stdio.h>
#include <math.h>

double standardFunction(double x, double y);

int main() {
    double x, y, c;
    scanf("%lf %lf", &x, &y);
    c = standardFunction(x, y);
    printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", x, y, c);
    return 0;
}

double standardFunction(double x, double y) {
    return sqrt(x * x  + y * y);
}
