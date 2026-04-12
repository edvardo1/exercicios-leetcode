int removeElement(int* nums, int numsSize, int val) {
    int outLen = 0;
	int numsIndex = 0;
	for (;;) {
		if (numsIndex >= numsSize) {
			return outLen;
		}
		if (nums[numsIndex] != val) {
			nums[outLen] = nums[numsIndex];
			outLen++;
		}
        numsIndex++;
	}
}
