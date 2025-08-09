// Lab 06-05 Find character in message EZ

#include <stdio.h>
#include <ctype.h>

int main() {
    int i, size = 0, count = 0, found[301];
    char text[301], alpha;
    scanf("%[^\n] ", &text);
    scanf("%c", &alpha);
    while (text[size] != '\0') {
        if (tolower(alpha) == tolower(text[size])) {
            found[count] = size + 1;
            count++;
        }
        size++;
    }
    if (count == 0) {
        printf("Not found.");
    }
    else {
        printf("There is/are %d \"%c\" in the above sentences.\nPosition", count, alpha);
        for (i = 0; i < count; i++) {
            (i == 0) ? printf(": %d", found[i]) : printf(", %d", found[i]);
        }
    }
    return 0;
}
