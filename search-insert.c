int searchInsert(int* nums, int numsSize, int target) {
	int lo = 0;
	int hi = numsSize;
	for (;;) {
		int i = (lo + hi) / 2;
		if (nums[i] < target) {
			if (lo == i) {
				return lo + 1;
			}
			lo = i;
		} else if (nums[i] > target) {
			if (hi == i) {
				return lo;
			}
			hi = i;
		} else {
			return i;
		}
	}
}
