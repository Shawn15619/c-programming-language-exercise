#include <stdio.h>

#define LINESIZE 16
#define MAXINPUT 1000
#define TABSIZE 8

int readline(char line[], int maxsize);
void fold(char line[], int size, char target[]);

int main() {
    char line[MAXINPUT];
    char target[MAXINPUT * 2];
    while(readline(line, MAXINPUT)){
        fold(line, LINESIZE, target);
        printf("%s", line);
        printf("%s", target);
    }
    
}

int readline(char line[], int maxsize) {
    int c;
    int i = 0;
    while((c = getchar()) != EOF && c != '\n' && i < maxsize - 1){
        line[i++] = c;
    }
    if(c == EOF) {
        printf("%s", "Bye~");
    }
    if(c == '\n') {
        line[i++] = '\n';
    }
    line[i] = '\0';
    return i;
}

void fold(char line[], int size, char target[]) {
    int i = 0;
    int j = 0;
    int z = 0;
    char c;
    while((c = line[i++]) != '\0'){
        target[z++] = c;
        if(c == '\t'){
            j = j - (j % TABSIZE) + TABSIZE;
            if(j % LINESIZE < TABSIZE){
                target[z++] = '\n';
            }
        }else{
            j++;
            if(j % LINESIZE == 0){
                target[z++] = '\n';
            }
        }
    }
    target[z] = '\0';
}
