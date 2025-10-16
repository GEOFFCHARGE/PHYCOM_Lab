// [Mock Exam] ระบบการจัดหมวดหมู่ห้องสมุด

#include <stdio.h>

int main()
{
    int bookId;
    scanf("%d", &bookId);
    int digit1 = bookId % 10;
    int digit2 = bookId % 100;
    if (bookId < 1000)
    {
        if (digit1 == 0 || digit1 == 5)
        {
            printf("Science");
        }
        else if (digit1 == 3 || digit1 == 7)
        {
            printf("Literature");
        }
        else
        {
            printf("General Collection");
        }
    }
    else
    {
        if (digit2 % 4 == 0)
        {
            printf("Reference");
        }
        else if (digit2 == 11 || digit2 == 22 || digit2 == 33)
        {
            printf("History");
        }
        else
        {
            printf("Unclassified");
        }
    }
	return 0;
}
