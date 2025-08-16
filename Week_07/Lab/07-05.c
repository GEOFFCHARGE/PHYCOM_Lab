// Lab 07-05 Math function

#include <stdio.h>

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main() {
    int n;
    scanf("%d", &n) ;
    double array[n];
    for (int i = 0; i <n; ++i) {
        array[i] = getValue();
    }
    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);
    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf", n, min, max, avg);
}

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}

double findMin(double array[], int size) {
    double value = 999999.99;
    for (int i = 0; i < size; i++) {
        if (value > array[i]) {
            value = array[i];
        }
    }
    return value;
}

double findMax(double array[], int size) {
    double value = 0.00;
    for (int i = 0; i < size; i++) {
        if (value < array[i]) {
            value = array[i];
        }
    }
    return value;
}

double findAvg(double array[], int size) {
    double value = 0.00;
    for (int i = 0; i < size; i++) {
        value += array[i];
    }
    return value / size;
}
