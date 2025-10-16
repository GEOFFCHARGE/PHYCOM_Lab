// [Mock Exam] Paper

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("A%d\nA%d", &a, &b);
    printf("%.0lf", pow(2, abs(a - b)));
    return 0;
}
