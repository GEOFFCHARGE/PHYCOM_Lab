// Lab 03-06 Can price rate

#include <stdio.h>
#include <math.h>

int main()
{
    double price;
    double rr;
    double h;
    double v;
    scanf("%lf", &price);
    scanf("%lf", &rr);
    scanf("%lf", &h);
    v = h * 3.14159265359 * pow(rr / 2.0, 2);
    printf("Volume : %.2lfml\n", v);
    printf("Baht/ml : %.4lf", price / v);
    return 0;
}
