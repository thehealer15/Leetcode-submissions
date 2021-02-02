// Runtime: 12 ms, faster than 69.22% of C++ online submissions for Minimum Subsequence in Non-Increasing Order.
// Memory Usage: 10.5 MB, less than 94.22% of C++ online submissions for Minimum Subsequence in Non-Increasing Order.
// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size()-1;
        vector<int> v;
        int tot=0, main_sum=0;
        for(int i=0;i<nums.size();i++)
            tot+=nums[i];
        
        while(main_sum<=tot){
            main_sum+=nums[k];
            v.push_back(nums[k]);
            tot-=nums[k--];            
        }    
        return v;
    }
};
