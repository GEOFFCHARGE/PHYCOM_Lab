// Lab 03-05 Perimeter of rectangle

# include <stdio.h>

int main()
{
    double w;
    double l;
    scanf("%lf", &w);
    scanf("%lf", &l);
    printf("Perimeter of rectangle = %.4lf units", (w * 2) + (l * 2));
    return 0;
};
