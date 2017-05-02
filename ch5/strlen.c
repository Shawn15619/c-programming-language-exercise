#include <stdio.h>

int strlen_(char *s) {
    int n = 0;
    for (n = 0; *s != '\0'; s++, n++) ;
    return n;
}

int main() {
    char str[] = "abc";
    char *p = str;
    int len = strlen_(p);
    printf("The length of str is: %d", len);
}
