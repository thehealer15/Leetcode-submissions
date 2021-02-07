// Runtime: 40 ms, faster than 92.14% of C++ online submissions for Maximum Product of Three Numbers.
// Memory Usage: 27.6 MB, less than 97.03% of C++ online submissions for Maximum Product of Three Numbers.
// https://leetcode.com/problems/maximum-product-of-three-numbers
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
//         in case there are 2 negative's
        if(nums[0]<0&&nums[1]<0&& nums[nums.size()-1]>0){         
            return max( nums[0]*nums[1]*nums[nums.size()-1],nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]);
        }

//         No negative is useful, return last 3
        return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
    }
};
