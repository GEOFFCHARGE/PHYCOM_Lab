// 04-02 Duck

#include <stdio.h>

int main()
{
    int quack;
    scanf("%d", &quack);
    if (quack > 50)
    {
        printf("Duck Type: Talkative Duck");
    }
    else if (quack > 10)
    {
        printf("Duck Type: Happy Duck");
    }
    else if (quack > 0)
    {
        printf("Duck Type: Chill Duck");
    }
    else if (quack == 0)
    {
        printf("Duck Type: Silent Duck");
    }
    else
    {
        printf("Error");
    }
    return 0;
}
