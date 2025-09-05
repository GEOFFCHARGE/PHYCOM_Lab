// Lab 09-06 Character Counter

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int low = 0, upp = 0, dig = 0;
    char *str = (char*) malloc(101 * sizeof(char));
    scanf(" %[^\n]s", str);
    char *ptr = str;
    while (*ptr)
    {
        if (islower(*ptr))
        {
            low++;
        }
        else if (isupper(*ptr))
        {
            upp++;
        }
        else if (isdigit(*ptr))
        {
            dig++;
        }
        ptr++;
    }
    printf("Lowercase letters: %d\n", low);
    printf("Uppercase letters: %d\n", upp);
    printf("Digits: %d", dig);
    free(str);
    return 0;
}
