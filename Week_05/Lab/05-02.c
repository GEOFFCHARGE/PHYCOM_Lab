// Lab 05-02 : n to 1
 
#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    do
    {
        printf("%d ", n);
        n--;
    }
    while (n > 0);
    return 0;
}
