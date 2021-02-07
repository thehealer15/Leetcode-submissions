// Runtime: 4 ms, faster than 35.72% of C++ online submissions for Power of Four.
// Memory Usage: 6 MB, less than 65.25% of C++ online submissions for Power of Four
// eetcode.com/problems/power-of-four

class Solution {
public:
    double log_n_base_4(int n){
        return log2(n)/2;
    }
    
    bool isPowerOfFour(int n) {
       if(n<=0) return false;
        if(n==1)return true;
        return ceil(log_n_base_4(n))==floor(log_n_base_4(n));
    }
};
