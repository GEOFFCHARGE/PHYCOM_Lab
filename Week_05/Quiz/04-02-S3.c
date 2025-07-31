// [Quiz Rerun] Major Cineplex

#include <stdio.h>

int main()
{
    int age, day, price = 120;
    scanf("%d\n%d", &age, &day);
    if (age > 59)
    {
        price = 140;
    }
    else if (age > 12)
    {
        price = 220;
    }
    if (day == 4)
    {
        price = 100;
    }
    else if (day == 1 || day == 7)
    {
        price += 20;
    }
    printf("Ticket price: %d Baht", price);
    return 0;
}
