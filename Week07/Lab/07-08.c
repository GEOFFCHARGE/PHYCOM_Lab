// Lab 07-08 Convert

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convert();
void compare();

int main() {
    char text1[101], text2[101];
    scanf(" %[^\n]", &text1);
    scanf(" %[^\n]", &text2);
    convert(text1, text2);
    compare(text1, text2);
    return 0;
}

void convert(char text1[101], char text2[101]) {
    for (int i = 0; i < strlen(text1); i++) {
        text1[i] = (isupper(text1[i])) ? tolower(text1[i]) : toupper(text1[i]);
    }
    for (int i = 0; i < strlen(text2); i++) {
        text2[i] = (isupper(text2[i])) ? tolower(text2[i]) : toupper(text2[i]);
    }
}

void compare(char text1[101], char text2[101]) {
    printf("*** Results ***\n%s\n%s\n***************\n", text1, text2);
    for (int i = 0; i < strlen(text1); i++) {
        text1[i] = tolower(text1[i]);
    }
    for (int i = 0; i < strlen(text2); i++) {
        text2[i] = tolower(text2[i]);
    }
    if (strcmp(text1, text2) == 0) {
        printf("Both strings are the same.");
    }
    else {
        printf("Both strings are not the same.");
    }
}
