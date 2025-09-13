// [Quiz Rerun] Which way is better?

#include <stdio.h>

int main() {
    int path[4], eday = 0, rday = 0;
    double fuel, cons[4], esum = 0.0, rsum = 0.0;
    scanf("%lf\n", &fuel);
    scanf("%d %d %d %d\n", &path[0], &path[1], &path[2], &path[3]);
    scanf("%lf %lf %lf %lf", &cons[0], &cons[1], &cons[2], &cons[3]);
    for (int i = 0; i < 4; i++) {
        double litr, cost;
        if (path[i]) {
            litr = 29.0 / cons[i];
            cost = (litr * fuel) + 60.0;
            esum += cost;
            eday++;
        }
        else {
            litr = 25.0 / cons[i];
            cost = litr * fuel;
            rsum += cost;
            rday++;
        }
        printf("Day %d: fuel %.2lf L, cost %.2lf Baht\n", i + 1, litr, cost);
    }
    printf("Expressway: %.2lf Baht\n", (eday) ? esum / eday : 0);
    printf("Romklao: %.2lf Baht\n", (rday) ? rsum / rday : 0);
    return 0;
}
