class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // i points to the last valid element in nums1
        int i = m - 1;

        // j points to the last element in nums2
        int j = n - 1;

        // x points to the last position of the merged array in nums1
        int x = m + n - 1;

        // Compare elements from the end of both arrays
        // and place the larger one at the end of nums1
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                // nums1 element is larger, place it at position x
                nums1[x] = nums1[i];
                x--; // Move merged-array pointer left
                i--; // Move nums1 pointer left
            }
            else {
                // nums2 element is larger or equal, place it at position x
                nums1[x] = nums2[j];
                x--; // Move merged-array pointer left
                j--; // Move nums2 pointer left
            }
        }

        // If nums2 still has elements left, copy them into nums1
        // No need to copy remaining nums1 elements because they are already in place
        while (j >= 0) {
            nums1[x] = nums2[j];
            j--; // Move nums2 pointer left
            x--; // Move merged-array pointer left
        }
    }
};
