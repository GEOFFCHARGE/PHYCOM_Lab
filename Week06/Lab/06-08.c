// Lab 06-08 Decrypt EZ

#include <stdio.h>
#include <ctype.h>

int decrypt(char alpha);

int main() {
    char text[200];
    scanf(" %[^\n]", &text);
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            text[i] = decrypt(text[i]);
        }
    }
    printf("%s", text);
    return 0;
}

int decrypt(char alpha) {
    int j;
    char crypt[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    for (int i = 0; i < 26; i++) {
        if (crypt[i] == toupper(alpha)) {
            j = (i > 20) ? i - 21 : i + 5;
            j = (islower(alpha)) ? tolower(crypt[j]) : crypt[j];
            return j;
        }
    }
}
