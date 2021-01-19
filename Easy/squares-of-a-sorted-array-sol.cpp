
// https://leetcode.com/problems/squares-of-a-sorted-array
// Runtime: 40 ms, faster than 95.70% of C++ online submissions for Squares of a Sorted Array.
// Memory Usage: 25.9 MB, less than 98.67% of C++ online submissions for Squares of a Sorted Array.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=pow(abs(nums[i]),2);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
