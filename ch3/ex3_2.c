#include <stdio.h>

#define MAXSIZE 1000

int readline(char line[], int len);
int escape(char s[], char t[]);
int unescape(char s[], char t[]);

int main(){
    char line[MAXSIZE];
    char replace[MAXSIZE * 2];
    readline(line, 64);
    escape(line, replace);
    //printf("%s\n",line);
    printf("\n%s\n", replace);
    printf("Finished!\n");
    return 0;
}

int readline(char line[], int len) {
    int c;
    int i;
    while((c = getchar()) != EOF && i < len - 1) {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

int escape(char s[], char t[]) {
    int i = 0;
    int j = 0;
    int c;
    while((c = s[i++]) != '\0'){
        switch (c) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j++] = c;
        }
    }
    t[j] = '\0';
    return j;
}
