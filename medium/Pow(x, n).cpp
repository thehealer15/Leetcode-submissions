// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pow(x, n).
// Memory Usage: 5.8 MB, less than 89.77% of C++ online submissions for Pow(x, n).
// https://leetcode.com/problems/powx-n
class Solution {
public:
    double myPow(double x, int n) {
        double answer=1.000000;
        long long a=n;
        if(n<0)
            a=a*(-1);
        while(a>0){
            if(a%2==1){
                answer*=x;
                a--;
            }
            else{
                x*=x;
                a/=2;
            }
                
        }
        if(n<0)
            answer=(double)1.000000/(double)answer;
            
        return answer;
    }
};
