https://leetcode.com/problems/remove-element/submissions/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    
        int free_index=0;
        for(int i=0;i<nums.size();i++){
bool valid =!(val==nums[i]);
nums[free_index]=nums[i]*static_cast<int>(valid)+nums[free_index]*static_cast<int>(!valid); 
free_index+=static_cast<int>(valid);
            
        }
        return free_index;
        
    }
};