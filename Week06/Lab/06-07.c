// Lab 06-07 Encrypt EZ

#include <stdio.h>
#include <ctype.h>

int encrypt(char alpha);

int main() {
    char text[200];
    scanf(" %[^\n]", &text);
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            text[i] = encrypt(text[i]);
        }
    }
    printf("%s", text);
    return 0;
}

int encrypt(char alpha) {
    int j;
    char crypt[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    for (int i = 0; i < 26; i++) {
        if (crypt[i] == toupper(alpha)) {
            j = (i < 5) ? i + 21 : i - 5;
            j = (islower(alpha)) ? tolower(crypt[j]) : crypt[j];
            return j;
        }
    }
}
