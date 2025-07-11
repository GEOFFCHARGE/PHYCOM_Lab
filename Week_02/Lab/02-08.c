// Lab 02-08 3 Person
 
#include <stdio.h>
   
int main()
{
    char fname1[20];
    char sname1[20];
    char person2[40];
    char person3[40];
    scanf("%s %s", &fname1, &sname1);
    scanf(" %[^\n]", &person2);
    scanf(" %[^\n]", &person3);
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s", person3);
    return 0;
}

