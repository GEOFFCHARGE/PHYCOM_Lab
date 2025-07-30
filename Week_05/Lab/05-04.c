// Lab 05-04 : While
 
#include <stdio.h>
 
int main()
{
    int n, m = 1;
    scanf("%d", &n);
    if (n > 1)
    {
        while (n >= m)
        {
            printf("%d ", m);
            m++;
        }
    }
    else
    {
        while (n <= m)
        {
            printf("%d ", m);
            m--;
        }
    }   
    return 0;
}
