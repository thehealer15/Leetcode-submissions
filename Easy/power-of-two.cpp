// https://leetcode.com/problems/power-of-two
// Runtime: 4 ms, faster than 38.67% of C++ online submissions for Power of Two.
// Memory Usage: 5.8 MB, less than 85.22% of C++ online submissions for Power of Two.

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        auto d= log2(n);
        return floor(d)==ceil(d);
    }
};
