// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
// Memory Usage: 5.8 MB, less than 92.15% of C++ online submissions for Climbing Stairs.
// https://leetcode.com/problems/climbing-stairs.cpp
class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==2)return n;
        
        int a=1,b=2,cnt=0;
        for(int i=3;i<=n;i++){
            cnt=a+b;
            a=b;
            b=cnt;
        }
        return cnt;
    }
};
