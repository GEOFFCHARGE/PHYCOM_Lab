// Lab 07-10 Mantis Jumper

#include <stdio.h>

int fibo();

int main() {
    int n;
    scanf("%d", &n);
    printf("method = %d", fibo(n));
    return 0;
}

int fibo(int n) {
    if (n < 2) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
