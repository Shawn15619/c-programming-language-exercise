#include <stdio.h>

int main() {
    int c;
    int digits[12];
    for(int i = 0; i < 12; i++){
        digits[i] = 0;
    }
    while((c = getchar()) != EOF){
        if((c >= '0') && (c <= '9')){
            digits[(c - '0')]++;
        } else if(c == ' ' || c == '\n' || c == '\t') {
            digits[10]++;
        } else{
            digits[11]++;
        }
    }
    for(int i = 0; i < 12; i++){
        if(i < 10){
            printf("The number of %d is:\t%d\n",i,digits[i]);
        }
        if(i == 10){
            printf("The number of empty space:\t%d\n", digits[i]);
        }
        if(i == 11){
            printf("The number of characters:\t%d\n", digits[i]);
        }
    }
    return 0;
}
