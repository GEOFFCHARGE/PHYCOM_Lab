// [Quiz Rerun] Ladkrabang breed

#include <stdio.h>
#include <math.h>

double fuel(char alpha);

int main() {
    int days;
    double sum1 = 0.0, sum2 = 0.0, sum3 = 0.0, ref1, ref2, ref3;
    char name[3][7];
    scanf("%d\n", &days);
    scanf("%s %s %s", name[0], name[1], name[2]);
    while (days--) {
        double use1, use2, use3;
        scanf("%lf %lf %lf", &use1, &use2, &use3);
        sum1 += use1;
        sum2 += use2;
        sum3 += use3;
    }
    ref1 = ceil(sum1 / fuel(name[0][0]));
    ref2 = ceil(sum2 / fuel(name[1][0]));
    ref3 = ceil(sum3 / fuel(name[2][0]));
    printf("%s: %.0lf refills\n", name[0], ref1);
    printf("%s: %.0lf refills\n", name[1], ref2);
    printf("%s: %.0lf refills\n", name[2], ref3);
    return 0;
}

double fuel(char alpha) {
    return (alpha == 'N') ? 6.6 : 5.5;
}
