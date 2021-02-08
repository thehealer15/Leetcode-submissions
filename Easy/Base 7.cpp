// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Base 7.
// Memory Usage: 5.8 MB, less than 88.24% of C++ online submissions for Base 7.
// https://leetcode.com/problems/base-7


class Solution {
public:
    string convertToBase7(int num) {
        string repres;
        if(num==0){
            repres.push_back('0');
            return repres;
        };
        bool isNeg=(num<0);
        if(isNeg)
            num=abs(num);
        while(num>0){
            int dig=num%7;
            num/=7;
            repres.push_back(dig+'0');
        }
        if(isNeg)
            repres.push_back('-');
        reverse(repres.begin(),repres.end());
        return repres;
    }
};
