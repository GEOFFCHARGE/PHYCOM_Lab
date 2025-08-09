// Lab 06-09 Histogram

#include <stdio.h>
#include <ctype.h>

int main() {
    int n, point = 0, count[n];
    scanf("%d", &n);
    char texts[n], alpha[n];
    for (int i = 0; i < n; i++) {
        scanf(" %c", &texts[i]);
        texts[i] = tolower(texts[i]);
    }
    for (int i = 0; i < n; i++) {
        if (isalpha(texts[i])) {
            alpha[point] = texts[i];
            count[point] = 0;
            for (int j = i; j < n; j++) {
                if (alpha[point] == texts[j]) {
                    count[point]++;
                    texts[j] = '-';
                }
            }
            point++;
        }
    }
    for (int i = 0; i < point; i++) {
        printf("%c: %d\n", alpha[i], count[i]);
    }
    return 0;
}
