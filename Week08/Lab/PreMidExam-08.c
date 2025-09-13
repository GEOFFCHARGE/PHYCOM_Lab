// Pre Exam 08: Home Run

#include <stdio.h>

int main()
{
    int turn, home = 0;
    scanf("%d", &turn);
    double dist;
    scanf("%lf", &dist);
    for (int i = 0; i < turn; i++)
    {
        double leng;
        scanf("%lf", &leng);
        if (dist > leng)
        {
            home++;
        }
    }
    printf("%d", home);
    return 0;
}
