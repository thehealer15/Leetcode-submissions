// Runtime: 16 ms, faster than 91.55% of C++ online submissions for Majority Element.
// Memory Usage: 19.5 MB, less than 88.65% of C++ online submissions for Majority Element.
// https://leetcode.com/problems/majority-element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0,cnt=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[res])
                cnt++;
            else
                cnt--;
            if(cnt==0){
                cnt=1;
                res=i;
            }
        }
            
       return nums[res]; 
    }
};
