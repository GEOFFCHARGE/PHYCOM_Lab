// Lab 02-07 IT Registrar
   
#include <stdio.h>
   
int main()
{
    char a[30];
    char b[30];
    char c[10];
    int d;
    int e;
    int f;
    float g;
    scanf("%s", &a);
    scanf("%s", &b);
    scanf("%s", &c);
    scanf("%d/%d/%d", &d, &e, &f);
    scanf("%f", &g);
    printf("Fullname: %s", a);
    printf(" %s\n", b);
    printf("ID: %s\n", c);
    printf("DOB: %02d-%02d-%d\n", d, e, f);
    printf("GPA: %.2f\n", g);
    return 0;
}

