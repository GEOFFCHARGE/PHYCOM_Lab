// Lab 04-07 T-Shirt Sales

#include <stdio.h>

int main()
{
    float shirt, case1, case2;
    int perct, count, temp1, temp2;
    scanf("%f\n%d\n%d", &shirt, &perct, &count);
    case1 = shirt * (100 - perct) * 0.01 * count;
    temp1 = count / 3;
    temp2 = count % 3;
    case2 = (((temp1 * 3) - (temp1)) * shirt) + (temp2 * shirt);
    if (case1 > case2)
    {
        printf("Buy 2 Get 1\n");
        printf("%.2f", case2);
    }
    else
    {
        printf("Discount %d%%\n", perct);
        printf("%.2f", case1);
    }
    return 0;
}
