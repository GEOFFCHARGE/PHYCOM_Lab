// Lab 03-08 Datetime

# include <stdio.h>

int main()
{
    int t;
    int d;
    int h;
    int m;
    int s;
    scanf("%d", &s);
    t = s;
    d = s / 86400;
    s -= d * 86400;
    h = s / 3600;
    s -= h * 3600;
    m = s / 60;
    s -= m * 60;
    printf("%d s = %d d %d h %d m %d s", t, d, h, m, s);
    return 0;
};
