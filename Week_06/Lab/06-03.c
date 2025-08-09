// Lab 06-03 Scalar Matrix

#include <stdio.h>

int main() {
    double m[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &m[i][0], &m[i][1], &m[i][2]);
    }
    if (m[0][1] == 0 && m[0][2] == 0 && m[1][0] == 0 && m[1][2] == 0 && m[2][0] == 0 && m[2][1] == 0) {
        printf("This is a scalar matrix");
    }
    else {
        printf("This is not a scalar matrix");
    }
    return 0;
}
