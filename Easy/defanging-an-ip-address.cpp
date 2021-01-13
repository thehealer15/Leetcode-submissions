
// https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public:
    string defangIPaddr(string s) {
       string answer;
        int k=s.length();
        for(int i=0;i<k;i++){
            if(s[i]=='.')
                answer+="[.]";
            else
                answer+=s[i];
        }
        return answer;
    }
};