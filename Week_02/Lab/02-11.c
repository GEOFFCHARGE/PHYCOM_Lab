// Lab 02-11 Number
 
#include <stdio.h>
   
int main()
{
    int number;
    scanf("%d", &number);
    printf("%d%d", number % 1000, number / 1000);
    return 0;
}

