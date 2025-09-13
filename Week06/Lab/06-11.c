// Lab 06-11 Paper

#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    scanf("A%d\nA%d", &x, &y);
    printf("%d", (int) pow(2, y - x));
    return 0;
}
