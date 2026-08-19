class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n_xor = nums.size();
        for( int i = 0; i < nums.size(); i++){
            n_xor = n_xor ^ i;
            n_xor = n_xor ^ nums[i];
        }
        return n_xor;
    }
};

// brute force apporach 

/* T.C :- O(NlogN), S.C :- O(N)
1. sort nums
2. [0, n] expand the all number
final. compare 1 & 2 then get the missing value.
*/

// Optimal approach 
/* T.C :- O(N), S.C :- O(1)
Using xor, xor cancel same value.
XOR has two key rules:
•	 x ^ x = 0 
•	 x ^ 0 = x
ince the array contains numbers from  0  to  n  except one missing number, every present number appears once as an index and once as a value, so they cancel out.
*/