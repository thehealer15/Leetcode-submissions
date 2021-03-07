
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Two Sum II - Input array is sorted.
// Memory Usage: 9.7 MB, less than 60.80% of C++ online submissions for Two Sum II - Input array is sorted.
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i]) !=mp.end() )
            {
                ans.push_back(mp[target-nums[i]]+1);
                ans.push_back(i+1);
                return ans;
            }
            mp[nums[i]]=i;
        }
        
        return ans;
    }
};
