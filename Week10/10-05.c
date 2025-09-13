// Lab 10-05 String Abbreviation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = (char*) malloc(201 * sizeof(char));
    scanf("%[^\n]s", str);
    char *ptr = str;
    printf("%c.", *ptr);
    while (*ptr != ' ')
    {
        ptr++;
    }
    printf("%c.", *++ptr);
    free(str);
    return 0;
}
