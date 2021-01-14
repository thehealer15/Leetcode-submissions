/*
link-https://leetcode.com/problems/arithmetic-subarrays/
Runtime: 56 ms, faster than 95.44% of C++ online submissions for Arithmetic Subarrays.
Memory Usage: 25.7 MB, less than 83.26% of C++ online submissions for Arithmetic Subarrays.
*/
class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        ans.reserve(l.size());
        for(int i=0;i<l.size();i++){
            vector<int> v(nums.begin()+l[i],nums.begin()+r[i]+1);
            sort(v.begin(),v.end());
            int diff=v[1]-v[0];
            int  g;
            for(g=2;g<v.size();g++){
                if(v[g]-v[g-1]==diff)
                    continue;
                else{
                    ans.push_back(false);break;
                }
                
            }
            if(g==v.size())
                    ans.push_back(true);
        }
        return ans;
    }
};