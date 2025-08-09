// Lab 06-01 Index

#include <stdio.h>

int main() {
    double m1[3][3], m2[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &m1[i][0], &m1[i][1], &m1[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &m2[i][0], &m2[i][1], &m2[i][2]);
    }
    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2lf ", m1[i][0] * m2[0][j] + m1[i][1] * m2[1][j] + m1[i][2] * m2[2][j]);
        }
        printf("\n");
    }
    return 0;
}
