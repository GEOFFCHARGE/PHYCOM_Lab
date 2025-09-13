// Lab 09-07 Jumping Through String with Pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d\n%d", &n, &m);
    char *str = (char*) malloc(n * sizeof(char));
    scanf(" %[^\n]s", str);
    char *end = str + n;
    char *ptr = str;
    while (ptr < end && *ptr)
    {
        printf("%c", *ptr);
        ptr += m;
    }
    free(str);
    return 0;
}
