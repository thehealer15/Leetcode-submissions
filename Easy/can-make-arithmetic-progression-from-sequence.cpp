// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence
// Runtime: 4 ms, faster than 86.23% of C++ online submissions for Can Make Arithmetic Progression From Sequence.
// Memory Usage: 8.7 MB, less than 98.62% of C++ online submissions for Can Make Arithmetic Progression From Sequence

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        sort(a.begin(),a.end());
        int dif=a[1]-a[0];
       
        for(int i=2;i<a.size();i++){
            if(a[i]-a[i-1]==dif)
                continue;
            else 
                return false;
        }
        return true;
    }
};
