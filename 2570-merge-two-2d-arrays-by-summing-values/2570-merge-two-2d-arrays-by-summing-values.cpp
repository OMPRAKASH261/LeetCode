class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        // Result array to store merged [id, value] pairs
        vector<vector<int>> result;

        // Pointers for nums1 and nums2
        int i =0, j = 0;

        // Traverse both arrays while neither is exhausted
        while(i < nums1.size() && j < nums2.size()){
            // If current id in nums1 is smaller, add it to result
            if(nums1[i][0] < nums2[j][0]){
                result.push_back(nums1[i]);
                i++; // Move to next element in nums1
            }
            // If current id in nums2 is smaller, add it to result
            else if (nums1[i][0] > nums2[j][0]){
                result.push_back(nums2[j]);
                j++;  // Move to next element in nums2
            }
            // If both ids are equal, merge their values by adding them
            else {
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;  // Move forward in nums1
                j++;  // Move forward in nums2
            }
        }
        // Add remaining elements from nums1, if any
        while(i < nums1.size()){
            result.push_back(nums1[i]);
            i++;
        }
        // Add remaining elements from nums2, if any
        while(j < nums2.size()){
            result.push_back(nums2[j]);
            j++;
        }
        // Return the merged and sorted result
        return result;
    }
};