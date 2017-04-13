#include <stdio.h>

#define TABSIZE 8
#define LINESIZE 1000

//the size of a tab is set equal to 8 empty spaces
int readline(char line[], int maxsize);
void replacespace(char line[], char target[]);

int main(){
    char line[LINESIZE];
    char target[LINESIZE];
    
    while(readline(line, LINESIZE)){
        replacespace(line, target);
        printf("%s", line);
        printf("%s", target);
    }
    return 0;
}

int readline(char line[], int maxsize){
    int c;
    int i;
    for(i = 0; (c = getchar()) != EOF && c != '\n' && c < maxsize - 1; i++){
        line[i] = c;
    }
    if(c == '\n'){
        line[i++] = '\n';
    }
    if(c == -1){
        printf("%s", "Bye~\n");
    }
    line[i] = '\0';
    return i;
}

void replacespace(char line[], char target[]){
    int count = 0;
    int i = 0;
    int j = 0;
    int c;
    while((c = line[i++]) != '\0'){
        if(c != ' '){
            while(count > 0){
                target[j++] = ' ';
                count--;
            }
            target[j++] = c;
        }else{
            count++;
            if(count == TABSIZE){
                target[j++] = '\t';
                count = 0;
            }
        }
    }
    target[j] = '\0';
}
