// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum of Unique Elements.
// Memory Usage: 7.8 MB, less than 92.77% of C++ online submissions for Sum of Unique Elements.
// https://leetcode.com/problems/sum-of-unique-elements
class Solution{
    public:
    int sumOfUnique(vector<int>& nums) {
       int arr[101]={0};
       for(auto x:nums)
           arr[x]++;
        int sum=0;
        for(int i=0;i<101;i++)
        {
            if(arr[i]==1)
                sum+=i;
        }
        
        return sum;
       }
};
