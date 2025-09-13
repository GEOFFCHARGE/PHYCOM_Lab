// Lab 04-09 Alcohol

#include <stdio.h>

int main()
{
    int can, hour;
    float weight, cc, lc, temp, lcib;
    char gender, license;
    scanf("%c\n%f\n%c\n%f\n%f\n%d\n%d", &gender, &weight, &license, &cc, &lc, &can, &hour);
    temp = (gender == 'M') ? 0.68 : 0.55;
    lcib = ((lc * cc / 100 * can) / (weight * temp * 10) * 1000) - (15 * hour);
    (lcib <= 50 && license == 'Y') ? printf("Safe") : printf("Not Safe");
    return 0;
}
