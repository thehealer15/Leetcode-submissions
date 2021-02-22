class Solution {
public:
    string generateTheString(int n) {
        string ans;
        if(n&1){
            while(n--){
                ans.push_back('a');
            }
        }
        else{
            ans.push_back('a');
            while(--n){
                ans.push_back('b');
            }
            
        }return ans;
    }
};
/* 
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Generate a String With Characters That Have Odd Counts.
Memory Usage: 6.1 MB, less than 79.86% of C++ online submissions for Generate a String With Characters That Have Odd Counts.
https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/submissions/
*/
