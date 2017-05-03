#include <stdio.h>

#include "../strcmp.h"

void swap(char *v[], int i, int j);

void qsort(char *v[], int left, int right) {
	int i, last;
	if (left >= right) return;

	swap(v, left, (left + right) / 2);
	last = left;
	for(i = left + 1; i <= right; i++) {
		if(strcmp_(v[i], v[left]) < 0) {
			swap(v, ++last, i);
		}
	}
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}

void swap(char *v[], int i, int j) {
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

int main() {
	char *strs[] = {"Kobe Bryant", "Kevin Durant", "LeBron James"};
	qsort(strs, 0, 2);
	for (int i = 0; i < 3; i++) {
		printf("%s\n", strs[i]);
	}
}