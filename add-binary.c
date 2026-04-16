#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* addBinary(char* a, char* b) {
	int lenA = strlen(a);
	int lenB = strlen(b);
	int lenC = (lenA > lenB ? lenA : lenB) + 1;
	char *c = malloc(sizeof(char) * lenC + 1);
	int sum = 0;
	int ci = 0;
	int ai = lenA - 1;
	int bi = lenB - 1;

	while (ai >= 0 || bi >= 0 || sum != 0) {
		if (ai >= 0) {sum += a[ai--] - '0';}
		if (bi >= 0) {sum += b[bi--] - '0';}
		c[ci++] = (sum % 2) + '0';
		sum /= 2;
	}
	c[ci] = '\0';
	
	printf("ci: %d\n", ci);
	for (int i = 0; i < ci / 2; i++) {
		char tmp = c[i];
		c[i] = c[ci - i - 1];
		c[ci - i - 1] = tmp;
	}

	return c;
}
