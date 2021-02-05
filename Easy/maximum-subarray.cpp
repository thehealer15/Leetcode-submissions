// https://leetcode.com/problems/maximum-subarray
// Runtime: 8 ms, faster than 81.16% of C++ online submissions for Maximum Subarray.
// Memory Usage: 13.1 MB, less than 79.90% of C++ online submissions for Maximum Subarray.
// KADANE'S ALGORITHMS

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0],curr_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            
            if(curr_sum>max_sum)
                    max_sum=curr_sum;
            
            if(curr_sum<0)
                    curr_sum=0;
        }
        return max_sum;
    }
};
