// https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stone) {
        int c=0;
        int stone_len=stone.length();
        int jew_len=jewels.length();
        
        for(int i=0;i<stone_len;i++){
            char ch=stone[i];
            for(int j=0;j<jew_len;j++){
                if(ch==jewels[j])
                    c++;
                
            }
        }
        return c;
    }
};