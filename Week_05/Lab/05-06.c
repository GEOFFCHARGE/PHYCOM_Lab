// Lab 05-06 : Easy Pyramid

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    m = (n + n - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + n - 1; j++)
        {
            (j >= m - i && j <= m + i) ? printf("*") : printf(" ");
        }
        printf("\n");
    }
    return 0;
}
