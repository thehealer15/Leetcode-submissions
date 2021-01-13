https://leetcode.com/problems/shuffle-the-array/submissions/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer(n);
        int i=0;
        while(i<n){  
        answer.push_back(nums[i]);
        answer.push_back(nums[i+n]);
        i++;
        }
        answer.erase(answer.begin(),answer.begin()+n);
            // myvector.erase (myvector.begin(),myvector.begin()+3)
        return answer;
    }
};