// Runtime: 40 ms, faster than 86.42% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.
// Memory Usage: 18.2 MB, less than 99.76% of C++ online submissions for Number Of Rectangles That Can Form The Largest Square.
// https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& re) {
        for(int i=0;i<re.size();i++){
            re[i][0]=min(re[i][0],re[i][1]);
        }
        int max=0;
        
        for(int i=0;i<re.size();i++)
            if(re[i][0]>max)
                max=re[i][0];
        
        int cnt=0;
        for(int i=0;i<re.size();i++)
            if(max==re[i][0])
                cnt++;
        
    return cnt;
    }
};
