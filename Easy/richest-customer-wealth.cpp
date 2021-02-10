// Runtime: 4 ms, faster than 97.48% of C++ online submissions for Richest Customer Wealth.
// Memory Usage: 7.8 MB, less than 79.36% of C++ online submissions for Richest Customer Wealth.
// https://leetcode.com/problems/richest-customer-wealth

class Solution {
    int  sum,max;
    public:
    Solution(){
        sum=max=0;
    }
    
    int maximumWealth(vector<vector<int>>& accounts) {
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];        
            }
            if(sum>max)
                    max=sum;
            sum=0;
        }
        return max;
    }
};
