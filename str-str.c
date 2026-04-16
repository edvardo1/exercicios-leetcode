int strStr(char* haystack, char* needle) {
	int hl = strlen(haystack);
	int nl = strlen(needle);

	for (int i = 0; i <= hl - nl; i++) {
		for (int j = 0; needle[j] == haystack[i + j];) {
			j++;
			if (j == nl) {
				return i;
			}
		}
	}
	return -1;
}
