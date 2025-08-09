// [Quiz Rerun] Soot Koon

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d\n%d", &m, &n);
    for (int i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", m, i, m * i);
    }
    return 0;
}
