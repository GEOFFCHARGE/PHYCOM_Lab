// Lab 04-02 Find Number

#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a < b)
    {
        a, b = b, a;
    }
    if (b < c)
    {
        a, b = b, a;
    }
    return 0;
}
