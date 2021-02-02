// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Cost to Move Chips to The Same Position.
// Memory Usage: 7.4 MB, less than 68.81% of C++ online submissions for Minimum Cost to Move Chips to The Same Position.


class Solution {
public:
    int minCostToMoveChips(vector<int>& pos) {
        int a=0,b=0;
        for(int i=0;i<pos.size();i++){
            if(pos[i]&1)
                b++;
            else    
                a++;
            
        }
        return min(a,b);
    }
};
