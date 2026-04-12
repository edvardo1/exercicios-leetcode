int removeDuplicates(int* nums, int numsSize) {
	int outLen = 1;
	int numsIndex = 1;
	for (;;) {
		if (numsIndex >= numsSize) {
			return outLen;
		}
		if (nums[numsIndex] != nums[numsIndex - 1]) {
			nums[outLen] = nums[numsIndex];
			outLen++;
		}
		numsIndex++;
	}
}
