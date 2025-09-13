// Lab 04-03 Your Grade

#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    switch (a)
    {
        case 'A': case 'a':
            printf("Genius");
            break;
        case 'B': case 'b':
            printf("Good");
            break;
        case 'C': case 'c':
            printf("Try Harder");
            break;
        case 'D': case 'd':
            printf("Very Bad");
            break;
        case 'F': case 'f':
            printf("Fail");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}
