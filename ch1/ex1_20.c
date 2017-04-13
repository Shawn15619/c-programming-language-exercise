#include <stdio.h>

#define TABSIZE 8
#define MAXSIZE 1000

int getlinex(char line[], int maxsize) {
    int c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n' && i < maxsize - 1){
        line[i++] = c;
    }
    if(c == '\n'){
        line[i++] = '\n';
    }
    line[i] = '\0';
    return i;
}

void change(char to[], char from[]){
    int i;
    int j = 0;
    char c;
    int space_left;
    for(i = 0; (c = from[i]) != '\0'; i++){
        if(c != '\t'){
            to[j++] = c;
        }else{
            space_left = TABSIZE - (j % TABSIZE);
            while(space_left-- > 0){
                to[j++] = '#';
            }
        }
    }
    to[j] = '\0';
}

int main(){
    char line[MAXSIZE];
    char target[MAXSIZE * TABSIZE];
    
    while(getlinex(line, MAXSIZE)){
        change(target, line);
        printf("%s", target);
    }
    
    return 0;
}

