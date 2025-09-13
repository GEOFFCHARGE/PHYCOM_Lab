// Lab 03-10 BMI

#include <stdio.h>

int main()
{
    float h;
    float kg;
    scanf("%f", &h);
    scanf("%f", &kg);
    h *= 0.01;
    printf("%f", kg / (h * h));
    return 0;
}
