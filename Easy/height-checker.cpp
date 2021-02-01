// https://leetcode.com/problems/height-checker
// Runtime: 12 ms, faster than 8.36% of C++ online submissions for Height Checker.
// Memory Usage: 8.3 MB, less than 69.56% of C++ online submissions for Height Checker

class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector <int> ans(h);int c=0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<h.size();i++)
            if(ans[i]!=h[i])
                c++;
        return c;
    }
};
