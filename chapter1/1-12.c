#include <stdio.h>
#define WORD_SIZE 20

char word[20];
int main (){
	int index = 0;
	while (1) {
		int c;
		while ((c = getchar()) != EOF && c != '\n' && index < WORD_SIZE - 1) {
			word[index++] = c;
		}
		if (c == '\n' || index == WORD_SIZE - 1) {
			word[index] = '\0';
			printf("%s\n", word);
			index = 0;
			continue;
		}
		if (c == EOF) {
			word[index] = '\0';
			printf("%s\n", word);
			printf("bye~\n");
			break;
		}
	}
	return 0;
}