// Lab 06-04 Reverse Word EZ

#include <stdio.h>

int main() {
    int size = 0;
    char text[101];
    scanf("%[^\n]", &text);
    while (text[size] != '\0') {
        size++;
    }
    size--;
    while (size >= 0) {
        printf("%c", text[size--]);
    }
    return 0;
}
