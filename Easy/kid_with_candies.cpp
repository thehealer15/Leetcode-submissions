// problem link
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int k=*max_element(candies.begin(), candies.end());
        vector<bool> answer(0);
        int n=candies.size();
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=k){
                answer.push_back(true);
            }
            else{
                answer.push_back(false);
            }
            
        }
        return answer;
    }
};