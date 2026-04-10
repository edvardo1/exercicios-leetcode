/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int carry = 0;
	int newdigit = 0;
	for (int i = digitsSize - 1; i >= 0; i--) {
		int total = digits[i] + carry;
		if (i == digitsSize - 1) {
			total += 1;
		}
		newdigit = total % 10;
		carry    = total / 10;
		digits[i] = newdigit;
	}
	int *ret = NULL;
	if (carry == 0) {
		ret = (int *)malloc(sizeof(int) * digitsSize);
        *returnSize = digitsSize;
		memcpy(ret, digits, sizeof(int) * digitsSize);
	} else {
		ret = (int *)malloc(sizeof(int) * (digitsSize + 1));
        *returnSize = digitsSize + 1;
		memcpy(ret + 1, digits, sizeof(int) * digitsSize);
		ret[0] = carry;
	}
    return ret;
}
