// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
// Memory Usage: 6.7 MB, less than 57.15% of C++ online submissions for Find N Unique Integers Sum up to Zero.cpp
// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        v.reserve(n);
      
        if(n&1)
            v.push_back(0);
        n=n/2+1;
        for(int i=1;i<n;i++)
        {
            v.push_back(i); v.push_back(-i);
        }
        return v;
    }
};
