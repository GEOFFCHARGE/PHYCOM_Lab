// [Quiz Rerun] Yaris Ativ F1 Racing Case Convert
 
#include <stdio.h>
 
int main()
{
    char alpha;
    scanf("%c", &alpha);
    if (alpha >= 'a' && alpha <= 'z')
    {
        printf("%c", alpha - 32);
    }
    else if (alpha >= 'A' && alpha <= 'Z')
    {
        printf("%c", alpha + 32);
    }
    else
    {
        printf("error");
    }
    return 0;
}
