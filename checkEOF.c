#include <stdio.h>

int main()
{
	/* code */
	int c;

	while(1){
		c = getchar();
                putchar();
		if(c == EOF){
			printf("%d\n", c);
			break;
		}
	}
}