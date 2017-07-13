#include <stdio.h>
#define MAX 80

char word[MAX];

void swap(char *word, int len) {
	int i = 0;
	int j = len - 1;
	while (i < j) {
		*(word + i) ^= *(word + j);
		*(word + j) ^= *(word + i);
		*(word + i++) ^= *(word + j--);
	}	
}

int main() {
	while (1) {
		int index = 0;
		int c;
		while ((c = getchar()) != EOF && c != '\n' && index < MAX - 1) {
			word[index++] = c;
		}
		if (c == '\n') {
			word[index] = '\0';
			swap(word, index);
			printf("%s\n", word);
		}
		if (c == EOF) {
			break;
		}
	}
	return 0;
}