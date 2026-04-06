// https://leetcode.com/problems/merge-sorted-array/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i1 = 0, i2 = 0;
    for (;;) {
        if ( i2 >= n ) {
            break;
        } else if ( i1 >= m ) {
            memmove( &nums1[i1], &nums2[i2], (n - i2) * sizeof(int) );
            break;
        }
        if ( nums2[i2] < nums1[i1] ) {
            memmove( &nums1[i1 + 1], &nums1[i1], ( m++ - i1 ) * sizeof( int ) );
            nums1[i1] = nums2[i2++];
        } else {
            i1++;
        }
    }
}
