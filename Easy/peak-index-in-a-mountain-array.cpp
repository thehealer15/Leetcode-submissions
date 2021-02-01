// Runtime: 16 ms, faster than 68.26% of C++ online submissions for Peak Index in a Mountain Array.
// Memory Usage: 11.6 MB, less than 80.41% of C++ online submissions for Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-index-in-a-mountain-array
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=INT_MIN;
        int maxIndex=1;
        for(int i=0;i<arr.size();i++){
            if(max<arr[i])
            {
                max=arr[i];
                maxIndex=i;
            }
        }
        return maxIndex;
    }
};
