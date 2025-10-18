// [Mock Exam] Thai Highway Sorting

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char *roadSort = "eakt";
    char roadName[n][50];
    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", roadName[i]);
    }
    char *ptr = roadSort;
    while (*ptr)
    {
        for (int i = 0; i < n; i++)
        {
            if (*ptr == roadName[i][2])
            {
                printf("%s\n", roadName[i]);
            }
        }
        ptr++;
    }
    return 0;
}
