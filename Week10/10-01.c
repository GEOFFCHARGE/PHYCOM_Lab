// Lab 10-01 String Space

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = (char*) malloc(150 * sizeof(char));
    scanf("%[^\n]s", str);
    char *ptr = str;
    while (*ptr)
    {
        if (*ptr != ' ')
        {
            printf("%c", *ptr);
        }
        ptr++;
    }
    free(str);
    return 0;
}
