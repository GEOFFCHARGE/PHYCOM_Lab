// Quiz 02-02: Hello Student

#include <stdio.h>

int main()
{
    char fn[30];
    char ln[30];
    char nn[30];
    char id[10];
    scanf("%s", fn);
    scanf("%s", ln);
    scanf("%s", nn);
    scanf("%s", id);
    printf("Hello World, my name is %s (%s)\n\n", nn, fn);
    printf("Student ID: %s\n", id);
    printf("Name: %s %s\n", fn, ln);
    printf("Nickname: %s", nn);
    return 0;
}
