#include <stdio.h>

int main()
{
	/* code */
	int c;
	c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
	}

	return 0;
}