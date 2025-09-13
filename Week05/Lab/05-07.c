// Lab 05-07 : Sum 9
 
#include <stdio.h>
 
int main()
{
    int n, m = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == -9)
        {
            break;
        }
        m += n;
    }
    printf("%d", m);
    return 0;
}
