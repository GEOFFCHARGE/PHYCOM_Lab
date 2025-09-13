// Lab 06-06 Sort name normal

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[21][60];
    for (int i = 0; i < 20; i++) {
        scanf(" %[^\n]s", &name[i]);
        for (int j = 0; j < strlen(name[i]); j++) {
            name[i][j] = (j == 0 || name[i][j - 1] == ' ') ? toupper(name[i][j]) : tolower(name[i][j]);
        }
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 19; j > i; j--) {
            if (strcmp(name[j - 1], name[j]) > 0) {
                strcpy(name[20], name[j - 1]);
                strcpy(name[j - 1], name[j]);
                strcpy(name[j], name[20]);
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        printf("%s\n", name[i]);
    }
    return 0;
}
