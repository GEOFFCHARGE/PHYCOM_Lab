// Lab 10-17 Struct Weather

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Weather
{
    char outlook[9];
    int temperature;
    int humidity;
    char wind;
};

void playing_decision(struct Weather *day)
{
    if (!strcmp(day->outlook, "overcast"))
    {
        printf("yes\n");
    }
    else if (!strcmp(day->outlook, "rain") && day->wind == 'F')
    {
        printf("yes\n");
    }
    else if (!strcmp(day->outlook, "sunny") && day->humidity <= 77.5)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Weather *day = malloc(n * sizeof(struct Weather));
    for (int i = 0; i < n; i++)
    {
        scanf(" %s %d %d %c", (day + i)->outlook, &(day + i)->temperature, &(day + i)->humidity, &(day + i)->wind);
        playing_decision(day + i);
    }
    free(day);
    return 0;
}
