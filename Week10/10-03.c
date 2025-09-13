// Lab 10-03 String Count

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    char alp;
    char *str = (char*) malloc(150 * sizeof(char));
    scanf("%c\n%[^\n]s", &alp, str);
    char *ptr = str;
    while (*ptr)
    {
        if (tolower(*ptr) == tolower(alp))
        {
            count++;
        }
        ptr++;
    }
    printf("%d", count);
    free(str);
    return 0;
}
