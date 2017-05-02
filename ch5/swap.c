#include <stdio.h>

void swap(int *a, int *b) {
    *b ^= *a;
    *a ^= *b;
    *b ^= *a;
}

int main() {
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("%d\t%d", a, b);
}
