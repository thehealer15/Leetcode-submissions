// Runtime: 8 ms, faster than 72.58% of C++ online submissions for Min Cost Climbing Stairs.
// Memory Usage: 13.3 MB, less than 99.15% of C++ online submissions for Min Cost Climbing Stairs.
// https://leetcode.com/problems/min-cost-climbing-stairs
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int i=0,b=0,a=0,c=0;
        for(i=0;i<cost.size();i++,a=b,b=c){
            c=cost[i]+min(a,b);
        }
        return min(a,b);
    }
};
