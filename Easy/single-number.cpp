/*
Runtime: 16 ms, faster than 97.61% of C++ online submissions for Single Number.
Memory Usage: 16.9 MB, less than 95.75% of C++ online submissions for Single Number
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;
    }
};
