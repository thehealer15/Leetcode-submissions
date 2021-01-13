
// link-->https://leetcode.com/problems/search-insert-position/
// binary search --> 12 msec
// linear search --> 20 msec
// lower bound --> 16 msec

// one liner
// return lower_bound(nums.being(),nums.end(),target)-nums.begin();

// linear search --> O(n) solution
// for(int i=0;i<nums.size();i++){
// if(nums[i]>=target)
        // return i;
// }
// return nums.size()-1;

// binary search--> O(LogN) solution
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int low=0,high=nums.size();
        while(low<high){
            int mid=low+high>>1;
            if(nums[mid]<target)
                low=mid+1;
            
            else{
                high=mid;
            }
        }
        return low;
    }
};