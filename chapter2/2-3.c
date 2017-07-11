#include <stdio.h>
#define SIZE 80

char line[SIZE];

int readline(char line[]);
int htoi(char line[], int len);

int main () {
	int len = readline(line);
	int result = htoi(line, len);
	printf("%d\n", result);
	return 0;
}

int readline(char line[]) {
	int c;
	int len = 0;
	while ((c = getchar()) != EOF && c != '\n' && len < SIZE - 1) {
		line[len++] = c;
	}
	if (c == EOF && c == '\n') {
		line[len] = '\0';
	}
	
	return len;
}

int htoi(char line[], int len) {
	int result = 0;
	if (len < 3 || line[0] != '0' || (line[1] != 'x' && line[1] != 'X')) {
		return 0;
	}
	for (int i = 2; i < len; i++) {
		int temp;
		if ('0' <= line[i] && '9' >= line[i]) {
			temp = line[i] - '0';
		} else if ('a' <= line[i] && 'f' >= line[i]) {
			temp = (line[i] - 'a') + 10;
		} else {
			temp = (line[i] - 'A') + 10;
		}
		result = result * 16 + temp;
	}
	return result;
}