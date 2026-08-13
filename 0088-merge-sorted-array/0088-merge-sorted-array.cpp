class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int x = m+n-1;

        while(i >= 0 && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[x] = nums1[i];
                x--; i--;
            }
            else {
                nums1[x] = nums2[j];
                x--; j--;
            }
        }
        while( j >= 0){
            nums1[x] =nums2[j];
            j--; x--;
        }
    }
};

// The best approach is the reverse two-pointer method: start from the end of both arrays and fill  nums1  from the back, so we never overwrite useful values.
//  i = m - 1  for the last valid element in  nums1 
//	 j = n - 1  for the last element in  nums2 
//	 x = m + n - 1  for the last position in  nums1 
// Then compare  nums1[i]  and  nums2[j] , place the larger one at  nums1[k] , and move pointers backward until all elements from  nums2  are placed.

// Time complexity:  O(m + n),  Space complexity:  O(1)