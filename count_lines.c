#include <stdio.h>

int main(){
    int count = 0;
    int c;
    while((c = getchar()) != EOF) {
        putchar(c);
        if(c == '\n'){
            count++;
        }
    }
    printf("The number if lines is:\t%d", count);
    return 0;
}
