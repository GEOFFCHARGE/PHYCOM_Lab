// Lab 07-07 Sort name Hard

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char name[n + 1][60];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]s", &name[i]);
        for (int j = 0; j < strlen(name[i]); j++) {
            name[i][j] = (j == 0 || name[i][j - 1] == ' ') ? toupper(name[i][j]) : tolower(name[i][j]);
        }
    }
    for (int i = 1; i < n; i++) {
        strcpy(name[n], name[i]);
        int p = i - 1;
        while (p >= 0 && strcmp(name[p], name[n]) > 0) {
            strcpy(name[p + 1], name[p]);
            p--;
        }
        strcpy(name[p + 1], name[n]);
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}
