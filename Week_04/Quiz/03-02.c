// Quiz 03-02: GDB

#include <stdio.h>

int main()
{
    int a = 17, b = 25, c = 50, d = 10;
    int arr[3] = {3, 7, 11};
    int *p = &arr[1], *q = &c;

    printf("%d\n", c);
    printf("%d\n", *p);
    printf("%d\n\n", *q);

    *q = *(++p - 2);

    printf("%d\n", c);
    printf("%d\n", *p);
    printf("%d", *q);

    return 0;
}
