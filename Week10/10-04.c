// Lab 10-04 String Word

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int words = 1, count = 0;
    char *str = (char*) malloc(152 * sizeof(char));
    scanf("%[^\n]s", str);
    char *ptr = str;
    while (*ptr)
    {
        if (*ptr++ == ' ')
        {
            words++;
        }
    }
    printf("%d words\n----\n", words);
    ptr = str;
    while (*ptr)
    {
        if (*ptr == ' ')
        {
            printf(" : %d\n", count);
            count = 0;
            ptr++;
        }
        printf("%c", tolower(*ptr++));
        count++;
    }
    printf(" : %d", count);
    free(str);
    return 0;
}
