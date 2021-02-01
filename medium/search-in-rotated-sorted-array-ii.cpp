// Runtime: 12 ms, faster than 35.48% of C++ online submissions for Search in Rotated Sorted Array II.
// Memory Usage: 14 MB, less than 86.15% of C++ online submissions for Search in Rotated Sorted Array II.
// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                    return true;
        }
        return false;
    }
};
