// Lab 09-04 String Collector

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = (char*) malloc(101 * sizeof(char));
    char *ptr = str;
    while (1)
    {
        char alp;
        scanf(" %c", &alp);
        if (alp == '-')
        {
            break;
        }
        *ptr++ = alp;
    }
    printf("%s\n", str);
    while (ptr > str)
    {
        printf("%c", *--ptr);
    }
    free(str);
    return 0;
}
