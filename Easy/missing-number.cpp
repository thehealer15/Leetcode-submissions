/*
https://leetcode.com/problems/missing-number
Runtime: 24 ms, faster than 91.32% of C++ online submissions for Missing Number.

Memory Usage: 17.9 MB, less than 94.67% of C++ online submissions for Missing Number.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i])
                return i;
        }
        return nums.size();
    }
};
