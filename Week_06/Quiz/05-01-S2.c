//  Quiz 05-01 Washing Machine Relationship
 
#include <stdio.h>
 
int main() {
    int game, hour;
    double heal = 2800.00, left = 2800.00;
    scanf("%d", &game);
    hour = game * 30 / 60;
    while (hour--) {
        left *= 0.98;
    }
    printf("%.2lf\n", heal - left);
    (left >= heal * 0.70) ? printf("Safe") : printf("Danger");
    return 0;
}
