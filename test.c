#include <stdio.h>

int main(){
    char str[] = "Kobe_Bryant";
    printf("%s\n", str);
    str[3] = '\0';
    printf("%s\n", str);
    printf("%c\n", str[6]);
    return 0;
    
}
