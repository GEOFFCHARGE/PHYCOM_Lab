// Lab 04-06 What type?

#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);
    if (alpha >= '0' && alpha <= '9')
    {
        printf("number");
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        printf("lowercase");
    }
    else if (alpha >= 'A' && alpha <= 'Z')
    {
        printf("uppercase");
    }
    else
    {
        printf("error");
    }
    return 0;
}
