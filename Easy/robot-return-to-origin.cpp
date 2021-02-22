// Runtime: 8 ms, faster than 97.38% of C++ online submissions for Robot Return to Origin.
// Memory Usage: 7.9 MB, less than 94.30% of C++ online submissions for Robot Return to Origin.
// https://leetcode.com/problems/robot-return-to-origin


class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0,d=0;
        
        for(char c:moves)
        {
            switch(c)
            {
                case 'U': d--;break;
                case 'D':d++;break;
                case 'L':l++;break;
                case 'R':l--;break;
            }
        }
        return l==0&&d==0;
    }
};
