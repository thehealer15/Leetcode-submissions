/* https://leetcode.com/problems/binary-search/

Runtime: 44 ms, faster than 96.21% of C++ online submissions for Binary Search.

Memory Usage: 27.4 MB, less than 99.97% of C++ online submissions for Binary Search.

*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+high;mid/=2;
            
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                high=mid-1;
            }
            if(nums[mid]<target)
                low=mid+1;
        }
        return -1;
    }
};
