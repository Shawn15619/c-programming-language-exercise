#include <stdio.h>

#define MAXLEN 16

void reverse(char line[], int len){
    int left = 0;
    int right = len - 1;
    while(left < right){
        int temp = line[left];
        line[left++] = line[right];
        line[right--] = temp;
    }
}

int itob(int n, char s[], int b) {
    int d;
    int res;
    int i = 0;
    while(n != 0) {
        res = n % b;
        n /= b;
        if(res > 9){
            s[i++] = 'A' + (res - 10);
        }else{
            s[i++] = '0' + res;
        }
    }
    reverse(s, i);
    s[i] = '\0';
}

int readline() {
    int c;
    int i = 0;
    int sum = 0;
    while((c = getchar()) != '\n') {
        sum = sum * 10 + (c - '0');
    }
    return sum;
}

int main() {
    char n[MAXLEN];
    int num = readline();
    printf("%d\n", num);
    itob(num, n, 16);
    printf("%s\n", n);
}
