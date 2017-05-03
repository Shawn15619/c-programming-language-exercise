#include <stdio.h>

int strcmp_(char *s, char *t) {
	while(*s == *t) {
		if(s == '\0') {
			return 0;
		}
		s++;
		t++;
	}
	return *s - *t;

}