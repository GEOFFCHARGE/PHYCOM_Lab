// Lab 05-08 : Draw X

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            (j == i || j == n - i - 1) ? printf("-") : printf("#");
        }
        printf("\n");
    }
    return 0;
}
