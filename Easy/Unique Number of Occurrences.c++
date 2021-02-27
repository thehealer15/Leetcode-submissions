// Runtime: 12 ms, faster than 6.48% of C++ online submissions for Unique Number of Occurrences.
// Memory Usage: 8.3 MB, less than 51.60% of C++ online submissions for Unique Number of Occurrences
// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int,int>m,mp;
        
        for(int x:arr)
            mp[x]++;
        
        for(auto a:mp)
            m[a.second]++;
        
        for(auto x:m)
            if(x.second>1)
                return false;
        
        return true;
            
    }
};
