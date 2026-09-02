// Two Pointers
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] < nums2[j]){
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }

        while (i < nums1.size()) merged.push_back(nums1[i++]);
        while (j < nums2.size()) merged.push_back(nums2[j++]);

        int mid = merged.size() / 2;
        if(merged.size() % 2 == 0){
            return (merged[mid-1] + merged[mid]) / 2.0;
        } else {
            return merged[mid];
        }
    }
};

/*
Strategy to Solve the Problem:
Two Pointers Merging Technique
The core idea here is to merge the two sorted arrays, nums1 and nums2, using a two-pointer approach. After merging, the median of the combined array can be found directly based on its length.

Key Data Structures:
 - merged: An array to store the merged result of nums1 and nums2.
 - i and j: Two pointers to traverse nums1 and nums2 respectively.

Enhanced Breakdown:
 1. Initialize Pointers:
    - Set i and j to 0. These pointers will help traverse nums1 and nums2.

 2. Merging using Two Pointers:
    - Merge elements of nums1 and nums2 in sorted order using two pointers. If an element in nums1 is smaller, append it to merged and move the i pointer. Otherwise, append the element from nums2 and move the j pointer.

 3. Handle Remaining Elements:
    - If there are any remaining elements in nums1 or nums2, append them directly to merged.

 4.Calculate Median:
    -Based on the length of merged, compute the median. If the length is even, the median is the average of the two middle elements. Otherwise, it's the middle element.

Complexity Analysis:
Time Complexity:
The merging process traverses both arrays once, resulting in a time complexity of O(m+n), where m and n are the lengths of nums1 and nums2 respectively.

Space Complexity:
The algorithm creates a merged array of length m+n, leading to a space complexity of O(m+n).
*/
