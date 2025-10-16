// [Mock Exam] Easy Histogram

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *alp = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
    char *str = calloc(100, sizeof(char));
    scanf("%[^\n]s", str);
    char *ptr = str;
    while (*alp)
    {
        int count = 0;
        while (*ptr)
        {
            if (*ptr != ' ' && *ptr == *alp)
            {
                count++;
            }
            ptr++;
        }
        if (count)
        {
            printf("%c = %d\n", *alp, count);
        }
        ptr = str;
        alp++;
    }
    free(str);
    return 0;
}
