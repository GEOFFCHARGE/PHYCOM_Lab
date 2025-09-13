// Lab 09-05 Reversing String using Pointer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = (char*) malloc(101 * sizeof(char));
    scanf(" %[^\n]s", str);
    char *end = str;
    while (*end)
    {
        end++;
    }
    while (end > str)
    {
        printf("%c", *--end);
    }
    free(str);
    return 0;
}
