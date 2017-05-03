#include <stdio.h>
#include <string.h>

char *strcat_(char *s, char *t) {
	char *p = s;
	while(*s != '\0') {
		printf("%s---%s\n", s, p);
		s++;
	}

	while(*t != '\0') {
		*s++ = *t++;
		printf("%s---%s\n", s, p);
	}
	*s = '\0';
	return p;
}