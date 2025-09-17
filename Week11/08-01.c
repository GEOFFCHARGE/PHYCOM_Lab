// Quiz 08-01: Jesus drives Honda

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = malloc(5000 * sizeof(char));
    scanf(" %[^\n]", str);
    for (int i = 0; i < strlen(str); i++)
    {
        *(str + i) = tolower(*(str + i));
    }
    char *ptr = strstr(str, "accord");
    while (ptr)
    {
        printf("%d", ptr - str);
        ptr = strstr(ptr + 6, "accord");
        if (ptr)
        {
            printf(", ");
        }
    }
    free(str);
}
