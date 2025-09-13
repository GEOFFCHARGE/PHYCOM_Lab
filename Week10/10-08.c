// Lab 10-08 String Cat Finding

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size, count = 0;
    char *str = (char*) malloc(2001 * sizeof(char));
    scanf("%[^\n]s", str);
    size = strlen(str);
    char *ptr = str;
    while (ptr + 2 < str + size)
    {
        if (tolower(*ptr) == 'c' && tolower(*(ptr + 1)) == 'a' && tolower(*(ptr + 2)) == 't')
        {
            if (count++)
            {
                printf(", ");
            }
            printf("%ld", ptr - str);
        }
        ptr++;
    }
    free(str);
    return 0;
}
