// Lab 10-07 String Unique Characters

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int dupl = 1;
    char *str = (char*) malloc(101 * sizeof(char));
    scanf("%[^\n]s", str);
    while (dupl)
    {
        dupl = 0;
        char *ptr = str;
        while (*ptr && *(ptr + 1))
        {
            if (*ptr == *(ptr + 1))
            {
                char *std = ptr;
                char *end = ptr + 1;
                while (*end && *std == *end)
                {
                    end++;
                }
                while (*end)
                {
                    *std = *end;
                    std++;
                    end++;
                }
                *std = '\0';
                dupl = 1;
            }
            ptr++;
        }
        if (dupl)
        {
            printf("%s\n", str);
        }
    }
    free(str);
    return 0;
}
