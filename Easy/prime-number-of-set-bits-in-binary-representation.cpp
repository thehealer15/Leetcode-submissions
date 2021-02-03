// Runtime: 4 ms, faster than 96.33% of C++ online submissions for Prime Number of Set Bits in Binary Representation.
// Memory Usage: 5.7 MB, less than 98.41% of C++ online submissions for Prime Number of Set Bits in Binary Representation.
// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation
class Solution {
public:
    bool isPrime(int n){
        if(n==2)return true;
        if(n==1)return false;
        int k=(int)sqrt(n)+1;
        for(int i=2;i<=k;i++){
            if(n%i==0)
                    return false;
        }
        return true;
    }
    
    int countPrimeSetBits(int L, int R) {
        int cnt=0;
        for(int i=L;i<=R;i++){
            if(isPrime(__builtin_popcount(i)))
                cnt++;
        }
    return cnt;
    }
};
