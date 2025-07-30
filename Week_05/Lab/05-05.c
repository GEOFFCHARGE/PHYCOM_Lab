// Lab 05-05 : Easy Loop
 
#include <stdio.h>
 
int main()
{
    int m;
    scanf("%d", &m);
    if (m > 0)
    {
        for (int i = m; i >= 0; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = m; i <= 0; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
