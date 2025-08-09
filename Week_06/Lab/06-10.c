// Lab 06-10 Is Palindrome ?

#include <stdio.h>
#include <ctype.h>

int main() {
    int i = 0, j = 0;
    char text[100];
    scanf("%s", &text);
    for (i; text[i] != '\0'; i++) {
        text[i] = tolower(text[i]);
    }
    while (text[j] != '\0') {
        if (text[j++] != text[--i]) {
            printf("It is not Palindrome.");
            return 0;
        }
    }
    printf("It is Palindrome.");
    return 0;
}
