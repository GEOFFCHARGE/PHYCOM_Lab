// Lab 05-09 : Reg System

#include <stdio.h>

int main()
{
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, aa = 0, hh = 0, ww = 0, a, h, w;
    for (int i = 0; i < 50; i++)
    {
        scanf("%d %d %d", &a, &h, &w);
        aa += a;
        hh += h;
        ww += w;
        if (a >= 20 && h >= 160)
        {
            c1++;
        }
        if (a < 20 && (h <= 180 || w >= 60))
        {
            c2++;
        }
        if (a >= 30 && w >= 40 && w <= 80)
        {
            c3++;
        }
        if (a < 40 && (w < 85 || h <= 200))
        {
            c4++;
        }
    }
    printf("Age >= 20 and Height >= 160: %d\n", c1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", c2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", c3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", c4);
    printf("Average Age: %d\n", aa / 50);
    printf("Average Height: %.2f\n", hh / 50.0);
    printf("Average Weight: %.2f", ww / 50.0);
    return 0;
}
