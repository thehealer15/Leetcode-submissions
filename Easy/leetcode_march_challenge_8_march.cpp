
// 49 / 49 test cases passed.
// 	Status: Accepted
// Runtime: 0 ms
// Memory Usage: 6.1 MB
class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length()==0)return 0;
        string p = s;
        reverse(p.begin(),p.end());
        if(s==p)return 1;
        return 2;
        
    }
};
// python code
/*

49 / 49 test cases passed.
	Status: Accepted
Runtime: 20 ms
Memory Usage: 14.2 MB
-------------------------------
class Solution:
    def removePalindromeSub(self, s: str) -> int:
        if(len(s)==0):
            return 0
        p=s[::-1]
        if(s==p):
            return 1
        return 2


*/
