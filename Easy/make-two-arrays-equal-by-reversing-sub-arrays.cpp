// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays
// Runtime: 12 ms, faster than 89.83% of C++ online submissions for Make Two Arrays Equal by Reversing Sub-arrays.
// Memory Usage: 14 MB, less than 87.60% of C++ online submissions for Make Two Arrays Equal by Reversing Sub-arrays.

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        
        int k=arr.size();
        for(int i=0;i<k;i++){
            if(arr[i]!=target[i])   
                return false;
        }
        return true;
    }
};
