// Lab 03-04 Arithmetic

#include <stdio.h>
#include <math.h>

int main()
{
    double n1;
    double n2;
    scanf("%lf,%lf", &n1, &n2);
    printf("The sum of the given numbers : %.6lf\n", n1 + n2);
    printf("The difference of the given numbers : %.6lf\n", n1 - n2);
    printf("The product of the given numbers : %.6lf\n", n1 * n2);
    printf("The quotient of the given numbers : %.6lf", n1 / n2);
    return 0;
}
