// Lab 06-01 Index

#include <stdio.h>

int main() {
    int x = -1, m = 0, n = 0, i, j;
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    while (x < 1 || x > 20) {
        scanf("%d", &x);
    }
    for (i = 0; i < 8; i++) {
        if (M[i] == x) {
            m = 1;
            break;
        }
    }
    for (j = 0; j < 7; j++) {
        if (N[j] == x) {
            n = 1;
            break;
        }
    }
    if (m == 0 && n == 0) {
        printf("%d is not in neither M nor N", x);
    }
    else if (m == 1) {
        printf("%d is in M at index [%d]", x, i);
    }
    else if (n == 1) {
        printf("%d is in N at index [%d]", x, j);
    }
    return 0;
}
