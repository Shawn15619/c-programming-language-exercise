#include <stdio.h>
#define MAXLINE 1000

int getline_(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];
    
    while ((len = getline_(line, MAXLINE)) > 0) {
        if(len > 80){
            printf("%s", line);
        }
    }
    return 0;
}

int getline_(char line[], int maxline){
    int i, c;
    for(i = 0; i < maxline - 1 && (c = getchar()) != EOF && c!= '\n'; i++)
        line[i] = c;
    if(c == '\n'){
        line[i] = '\0';
        i++;
    }
    line[i] = '\0';
    return i; //return the length of the string
    
}
