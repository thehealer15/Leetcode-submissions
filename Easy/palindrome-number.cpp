// Runtime: 12 ms, faster than 58.52% of C++ online submissions for Palindrome Number.
// Memory Usage: 5.8 MB, less than 87.79% of C++ online submissions for Palindrome Number.
// https://leetcode.com/problems/palindrome-number/submissions/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long rev=0,tmp=(long long)x;
        while(tmp>0){
            rev=rev*10+tmp%10;
            tmp=tmp/10;
        }
        return rev==(long long)x;
    }
};
