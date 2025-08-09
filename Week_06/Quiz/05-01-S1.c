// [Quiz Rerun] Walter White needs help

#include <stdio.h>

int main() {
    int f, l, s = 0;
    scanf("%d\n%d", &f, &l);
    printf("pass :");
    if (f < l) {
        for (f; f <= l; f++) {
            if (f % 2 == 0) {
                printf(" %d", f);
                s += f;
            }
        }
    }
    else {
        for (f; f >= l; f--) {
            if (f % 2 == 0) {
                printf(" %d", f);
                s += f;
            }
        }
    }
    printf("\nSum : %d", s);
    return 0;
}
