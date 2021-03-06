
// Distribute Candies
class Solution {
public:
    int distributeCandies(vector<int>& c) {
        set<int> s;
        int k= c.size()/2;
        for(int x:c)
            s.insert(x);
        
        if(k<=s.size()) return k;
        
        return s.size();
        
    }
};
