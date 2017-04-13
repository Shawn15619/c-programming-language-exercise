#include <stdio.h>
#define MAXLINE 1000

int getline_(char line[], int maxline);
//to avoid conflict in stdio.h
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = getline_(line, MAXLINE)) > 0) {
        if(len > max){
            copy(longest, line);
            max = len;
        }
    }
    if(max > 0){
        printf("Longest:\t%s", longest);
    }
    return 0;
}

void copy(char to[], char from[]) {
    int i = 0;
    while((to[i] = from[i]) != '\0') i++;
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
