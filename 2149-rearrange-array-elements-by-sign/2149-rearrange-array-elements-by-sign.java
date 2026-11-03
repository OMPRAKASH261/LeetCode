class Solution {
    public int[] rearrangeArray(int[] nums) {
        // Size of the input array
        int n = nums.length;

        // Create result array of the same size
        int[] ans = new int[n];

        // pos points to the next even index for positive numbers: 0, 2, 4, ...
        int pos = 0;

        // neg points to the next odd index for negative numbers: 1, 3, 5, ...
        int neg = 1;

        // Traverse every number in the input array
        for (int x : nums) {
            // If the number is positive, place it at the next even index
            if (x > 0) {
                ans[pos] = x;
                pos += 2; // Move to the next even index
            }
            // If the number is negative, place it at the next odd index
            else {
                ans[neg] = x;
                neg += 2; // Move to the next odd index
            }
        }

        // Return the rearranged array:
        // positive numbers at even indices,
        // negative numbers at odd indices
        return ans;
    }
}
