// Lab 04-02 Find Number
 
#include <stdio.h>
 
int main()
{
    float a, b, c, temp;
    scanf("%f %f %f", &a, &b, &c);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%.2f", b);
    return 0;
}
