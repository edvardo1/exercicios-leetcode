char* longestCommonPrefix(char** strs, int strsSize) {
	char *prefix = malloc(200);
	int isFirst = 1;
	for (int i = 0; i < strsSize; i++) {
		if (isFirst) {
			int j = 0;
			for (;;) {
				prefix[j] = strs[i][j];
				if (prefix[j] == '\0') {
					break;
				}
				j++;
			}
			isFirst = 0;
		} else {
			for (int j = 0; prefix[j] != '\0'; j++) {
				if (prefix[j] != strs[i][j]) {
					prefix[j] = '\0';
                    break;
				}
			}
		}
	}
	return prefix;
}
