#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) {
	int s_len = strlen(s);
	int t_len = strlen(t);
	if(t_len > s_len) return 0;
	s += s_len - t_len;
	while(*s != '\0') {
		if(*s++ != *t++) {
			return 0;
		}
	}
	return 1;
}