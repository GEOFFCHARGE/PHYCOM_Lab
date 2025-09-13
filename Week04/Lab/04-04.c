// Lab 04-04 Your Score

#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    if (a <= 100 && a >= 80)
    {
        printf("A");
    }
    else if (a < 80 && a >= 70)
    {
        printf("B");
    }
    else if (a < 70 && a >= 60)
    {
        printf("C");
    }
    else if (a < 60 && a >= 50)
    {
        printf("D");
    }
    else if (a < 50 && a >= 0)
    {
        printf("F");
    }
    else
    {
        printf("Out of Range");
    }
    return 0;
}
