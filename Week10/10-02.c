// Lab 10-02 String Pretty

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int len, cent1, cent2, temp;
    char text1[51], text2[41];
    scanf("%d\n%[^\n]\n%[^\n]", &len, text1, text2);
    cent1 = (int) ceil((double) (len - strlen(text1)) / 2);
    cent2 = (int) ceil((double) (len - strlen(text2)) / 2);
    for (int i = 0; i < len; i++)
    {
        printf("*");
    }
    printf("\n");
    temp = 0;
    while (temp < len)
    {
        if (temp == cent1)
        {
            printf("%s", text1);
            temp += strlen(text1) - 1;
        }
        else if (temp == 0 || temp == len - 1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        temp++;
    }
    printf("\n");
    temp = 0;
    while (temp < len)
    {
        if (temp == cent2)
        {
            printf("%s", text2);
            temp += strlen(text2) - 1;
        }
        else if (temp == 0 || temp == len - 1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        temp++;
    }
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}
