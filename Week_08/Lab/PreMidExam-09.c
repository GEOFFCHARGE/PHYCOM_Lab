// Pre Exam 09: Lift

#include <stdio.h>

int main()
{
    int person, case1p = 0, case2p = 1;
    scanf("%d", &person);
    double limits, overer = 0;
    scanf("%lf", &limits);
    for (int i = 0; i < person; i++)
    {
        int age;
        double weight;
        scanf("%d\n%lf", &age, &weight);
        overer += weight;
        if (age >= 12)
        {
            case1p = 1;
        }
        if (overer > limits)
        {
            case2p = 0;
        }
    }
    if ((case1p && case2p) || person == 0)
    {
        printf("Safe");
    }
    else
    {
        printf("Not Safe");
    }
    return 0;
}
