// [Quiz Rerun] Qualifying

#include <stdio.h>

int main()
{
    float time1, time2, time3;
    char name1[35], name2[35], name3[35];
    scanf(" %f %[^\n]s", &time1, &name1);
    scanf(" %f %[^\n]s", &time2, &name2);
    scanf(" %f %[^\n]s", &time3, &name3);
    if (time1 <= time2 && time1 <= time3)
    {
        printf("%s is Fastest : %.3f", name1, time1);
    }
    else if (time2 <= time1 && time2 <= time3)
    {
        printf("%s is Fastest : %.3f", name2, time2);
    }
    else
    {
        printf("%s is Fastest : %.3f", name3, time3);
    }
    return 0;
}
