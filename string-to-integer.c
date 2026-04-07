#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int myAtoi(char* s) {
	int isNegative = 0;
	int result = 0;
	for (;;) {
		if (*s == '\0') {
			return 0;
		}
		if (*s != ' ') {
			break;
		}
		s++;
	}
	if (*s == '-') {
		isNegative = 1;
		s++;
	} else if (*s == '+') {
		s++;
	} else if (!('0' <= *s && *s <= '9')) {
		return 0;
	}

	for (; '0' <= *s && *s <= '9'; s++) {
		if (!isNegative) {
			if (*s - '0' > INT_MAX - result) {
				result = INT_MAX;
				break;
			}
			result = result * 10 + (*s - '0');
		} else {
			if (-(*s - '0') < INT_MIN - result) {
				printf("%d < %d\n", -(*s - '0'), INT_MIN - result);
				result = INT_MIN;
				break;
			}
			result = result * 10 - (*s - '0');
		}
	}

	return result;
}

int main() {
	printf("myAtoi(%s) = %d\n", "  -1234", myAtoi("  -1234"));
	printf("myAtoi(%s) = %d\n", " 1337c0d3", myAtoi(" 1337c0d3"));
	printf("myAtoi(%s) = %d\n", " 0-1", myAtoi(" 0-1"));
}
