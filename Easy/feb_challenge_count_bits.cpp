class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        int mask=1;
        while(n>0){
            count+=(n&mask);
            n=n>>1;
        }
        return count;        
//         or use __builtin_popcount(n) method which is inbuilt in cpp
    }
};
