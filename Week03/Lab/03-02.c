// Lab 03-02 Sum and Average

#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float n4;
    float na;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    na = n1 + n2 + n3 + n4;
    printf("Summation is %.2f\n", na);
    printf("Average is %.3f", na / 4.0);
    return 0;
}
