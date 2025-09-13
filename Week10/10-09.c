// Lab 10-09 Struct Count 2

#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct info
{
    int chrc;
    int word;
    int line;
};

int main()
{
    struct info text = {0, 0, 0};
    while (1)
    {
        char temp[451];
        scanf(" %[^\n]", temp);
        if (strcmp(temp, ".") == 0)
        {
            break;
        }
        for (int i = 0; i < strlen(temp); i++)
        {
            if (isalpha(temp[i]))
            {
                text.chrc++;
            }
            else if (isspace(temp[i]))
            {
                text.word++;
            }
        }
        text.word++;
        text.line++;
    }
    printf("Char = %d, word = %d, line = %d", text.chrc, text.word, text.line);
    return 0;
}
