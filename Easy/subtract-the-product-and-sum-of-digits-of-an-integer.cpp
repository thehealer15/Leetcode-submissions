//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
        long long prod=1,sum=0;
        while(n>0){
            int dig=n%10;
            prod*=dig;
            sum+=dig;
            n/=10;
            
        }
        return (prod-sum);
    }
};