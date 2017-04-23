#include <stdio.h>
#include <ctype.h>

int getch(void)
int ungetch(int)

int getint(int *pn){
    int c, sign;
    while (isspace(c = getch())) ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        unget(c);
        return 0;
    }
    
    sign = (c == '-') ? -1: 1;
    if (c == '+' || c == '-') {
        c = getch();
    }
    
    for (*pn = 0; isdigit(c); c = getch()) {
        *pn = *pn * 10 + (c - '0');
    }
    
    *pn *= sign;
    
    if (c != EOF) unget(c);
    
    return c;
}
