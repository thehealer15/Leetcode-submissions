// Runtime: 4 ms, faster than 72.86% of C++ online submissions for Largest Number At Least Twice of Others.
// Memory Usage: 11.2 MB, less than 93.24% of C++ online submissions for Largest Number At Least Twice of Others.
// https://leetcode.com/problems/largest-number-at-least-twice-of-others

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        pair<int,int> Mfirst,Msecond;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>Mfirst.first){
            Msecond.first=Mfirst.first;
                Msecond.second=Mfirst.second;
                Mfirst.first=nums[i];
                Mfirst.second=i;   
            }
            if(nums[i]>Msecond.first && nums[i]<Mfirst.first)
            {
                Msecond.first=nums[i];
                Msecond.second=i;
            }
        }
        return (Mfirst.first>=2*Msecond.first)?Mfirst.second:-1;
    }
};
