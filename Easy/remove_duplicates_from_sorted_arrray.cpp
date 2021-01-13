O(n) time
O(1) space

Link-->https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Hint1---> 2 pointer
1. maintain i=0, j=1
2. chq i.e. traverse
3. if not equal i++, update array while walking dont update in case of copy i,e duplicate elements


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
            
        }
        return i+1;
    }
};