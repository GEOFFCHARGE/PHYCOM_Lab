// Lab 03-07 SMO#IT sales t-shirt

#include <stdio.h>

int main()
{
    float price;
    float perct;
    float count;
    scanf("%f", &price);
    scanf("%f", &perct);
    scanf("%f", &count);
    perct = (100.0 - perct) * 0.01;
    printf("%.2f", price * perct * count);
    return 0;
}
