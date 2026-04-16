int lengthOfLastWord(char* s) {
	int len = 0;
	bool hasWord = true;

	while (*s != '\0') {
		if (*s == ' ' || *s == '\t' || *s == '\n') {
			hasWord = false;
		} else if (hasWord) {
			len++;
		} else {
			len = 1;
			hasWord = true;
		}
		s++;
	}

	return len;
}
