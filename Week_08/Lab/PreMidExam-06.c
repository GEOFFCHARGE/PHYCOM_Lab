// Pre Exam 06: Sort

#include <stdio.h>

int main()
{
    int turn;
    int temp = 0;
    scanf("%d", &turn);
    double nums[turn + 1];
    for (int i = 0; i < turn; i++)
    {
        scanf("%lf", &nums[i]);
        if (nums[i] != (int) nums[i])
        {
            temp = 1;
        }
    }
    for (int i = 1; i < turn; i++) {
        nums[turn] = nums[i];
        int p = i - 1;
        while (p >= 0 && nums[p] > nums[turn]) {
            nums[p + 1] = nums[p];
            p--;
        }
        nums[p + 1] = nums[turn];
    }
    for (int i = 0; i < turn; i++)
    {
        if (temp == 1)
        {
            printf("%.2lf ", nums[i]);
        }
        else
        {
            printf("%d ", (int) nums[i]);
        }
    }
    return 0;
}
