// Lab 07-09 Golf

#include <stdio.h>
#include <math.h>

double dg2rd();
double findh();

int main() {
    double thetad, thetar, u, h;
    scanf("%lf\n%lf", &thetad, &u);
    thetar = dg2rd(thetad);
    h = findh(thetar, u);
    printf("theta (degree) : %.0lf\nu (m/s) : %.0lf\nh (m) : %.4lf", thetad, u, h);
    return 0;
}

double dg2rd(double thetad) {
    return thetad * 3.141592653589793 / 180.0; 
}

double findh(double thetar, double u) {
    return (u * u * sin(thetar) * sin(thetar)) / (2.0 * 9.81);
}
