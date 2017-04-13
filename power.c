#include <stdio.h>

double power(int base, int n);

int main() {
    int a = 100;
    int b = 2;
    double result = power(a, b);
    printf("%d ^ %d = %6.2f\n", a, b, result);
    return 0;
}

double power(int base, int n) {
    int res = 1;
    for(int i = 0; i < n; i++){
        res *= base;
    }
    return res;
}
