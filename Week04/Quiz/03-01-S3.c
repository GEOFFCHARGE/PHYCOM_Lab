// [Quiz Rerun] Calculate Grade

#include <stdio.h>

int main()
{
    char info[40];
    int g1, g2, g3, g4, g5, g6;
    scanf("%[^\n]", &info);
    scanf("%d %d %d %d %d %d", &g1, &g2, &g3, &g4, &g5, &g6);
    printf("Grade announcement 1/2568: %s\n", info);
    printf("GPS/GPA: %.2f", (g1 + g2 + g3 + g4 + g5 + g6) / 6.0);
    return 0;
}
