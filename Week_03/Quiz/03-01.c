// Quiz 02-01: Format Specifier

#include <stdio.h>

int main()
{
    int value1;
    float value2;
    char value3;
    char value4[50];
    scanf("%d", &value1);
    scanf("%f", &value2);
    scanf(" %c", &value3);
    scanf("%s", &value4);
    printf("Integer: %d\n", value1);
    printf("Float: %.3f\n", value2);
    printf("Character: %c\n", value3);
    printf("String: %s", value4);
    return 0;
}
