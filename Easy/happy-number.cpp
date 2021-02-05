// https://leetcode.com/problems/happy-number
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Happy Number.
// Memory Usage: 5.9 MB, less than 88.59% of C++ online submissions for Happy Number.

class Solution {
public:
    int next(int n){
        int sum=0;
        while(n>0){
            int tmp=n%10;
            sum+=tmp*tmp;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=next(n);
        while(slow!=fast){
            slow=next(slow);
            fast=next(next(fast));
        }
        return slow==1;
    }
};
