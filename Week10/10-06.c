// Lab 10-06 String ABC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int size;
    char *str = (char*) malloc(201 * sizeof(char));
    scanf("%[^\n]s", str);
    size = strlen(str);
    char *ptr = str;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(str + j) > *(str + j + 1))
            {
                int temp = *(str + j);
                *(str + j) = *(str + j + 1);
                *(str + j + 1) = temp;
            }
        }
    }
    printf("%s", str);
    free(str);
    return 0;
}
