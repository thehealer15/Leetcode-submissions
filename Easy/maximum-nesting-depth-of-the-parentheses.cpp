
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses
class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        // ( --> 40
        // ) --> 41
        
        int k= s.length();
        int brt=0;
        for(int i=0;i<k;i++){
            
            if(s[i]==40)
                brt++;
            if(brt>max)
               max++;
            if(s[i]==41)
                brt--;
        }
        return max;
    }
    
};