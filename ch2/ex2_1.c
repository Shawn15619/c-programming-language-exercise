#include <stdio.h>
#include <limits.h>

int main() {
    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf("signed char max: %d\n", SCHAR_MAX);
    printf("signed char min: %d\n", SCHAR_MIN);

    unsigned int i = ~0;
    printf("unsigned int max: %u\n", i);
    printf("signed int max: %d\n", i / 2);
    printf("signed int min: %d\n", -(i / 2) - 1);
    
    return 0;
}
