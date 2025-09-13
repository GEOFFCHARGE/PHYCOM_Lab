// Lab 03-03 Pythagoras

#include <stdio.h>
#include <math.h>

int main()
{
    double l;
    double w;
    scanf("%lf", &l);
    scanf("%lf", &w);
    printf("%.2lf", sqrt((l * l) + (w * w)));
    return 0;
}
