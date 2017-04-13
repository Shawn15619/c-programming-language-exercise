#include <stdio.h>

#define MAXLEN 8

int getvalue(int c){
    return c - '0';
}

int getnum(char num[], int len){
    int c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n' && i < len - 1){
        num[i++] = c;
    }
    if(c == '\n' || i == len - 1){
        num[i] = '\0';
    }
    if(c == EOF){
        printf("%s", "Bye~\n");
    }
    return i;
}

int htoi(char num[]){
    int val = 0;
    int c;
    
    for(int i = 2; (c = num[i]) != '\0'; i++){
        if(c >= '0' && c <= '9'){
            val = val * 16 + (c - '0');
        }else if (c >= 'a' && c <= 'f'){
            val = val * 16 + (c - 'a') + 10;
        }else if (c >= 'A' && c <= 'F'){
            val = val * 16 + (c - 'A') + 10;
        }
    }
    return val;
}

int main(){
    char num[MAXLEN];
    while (getnum(num, MAXLEN)){
        printf("%s\n", num);
        printf("%d\n", htoi(num));
    }
    return 0;
}
