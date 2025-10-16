// [Mock Exam] I'm MAX IV เพิ่ม MIN

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *num = calloc(5, sizeof(char));
    char *value = calloc(3, sizeof(char));
    scanf("%s\n%d\n%d\n%d\n%d\n%d", value, num, num + 1, num + 2, num + 3, num + 4);
    int newValue = *num;
    if (*(value + 1) == 'A')
    {
        for (int i = 0; i < 5; i++)
        {
            if (newValue < *(num + i))
            {
                newValue = *(num + i);
            }
        }
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (newValue > *(num + i))
            {
                newValue = *(num + i);
            }
        }
    }
    printf("%s : %d", value, newValue);
    free(num);
    free(value);
    return 0;
}
