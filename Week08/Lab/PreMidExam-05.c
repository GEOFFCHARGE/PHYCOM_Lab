// Pre Exam 05: Stardust

#include <stdio.h>
#include <math.h>

int num, sum = 0;

double mean(val[num])
{
    double meanNum = 0;
    for (int i = 0; i < num; i++)
    {
        meanNum += val[i];
        sum += val[i];
    }
    meanNum = (double) meanNum / num;
    return meanNum;
}

double medn(val[num])
{
    double mednNum = 0;
    if (num % 2 == 0)
    {
        int center = num / 2
    }
    else
    {
        int center = floor((double) num / 2)

    }
    return mednNum;
}

double stdv(val[num])
{
    double stdvNum = 0;
    return stdvNum;
}

int main()
{
    scanf("%d", &num);
    double val[num + 1];
    for (int i = 0; i < num; i++)
    {
        scanf("%lf", val[i]);
    }
    for (int i = 1; i < num; i++) {
        val[num] = val[i];
        int p = i - 1;
        while (p >= 0 && val[p] > val[num]) {
            val[p + 1] = val[p];
            p--;
        }
        val[p + 1] = val[num];
    }
    printf("%.2lf\n%.2lf\n%.2lf\n", mean(val[num]), medn(val[num]), stdv(val[num]));
    return 0;
}
