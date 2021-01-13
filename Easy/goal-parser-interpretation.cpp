// https://leetcode.com/problems/goal-parser-interpretation/

class Solution {
public:
    string interpret(string s) {
        string answer;
        int k=s.length();
        int i=0;
        
        while(i<k){
            if(s[i]=='G')
            {
                answer+='G';
                i++;continue;
            }
            if(s[i]=='(' &&s[i+1]==')' )
            {
                answer+='o';
                i+=2;continue;
            }
            if(s[i]=='('&&s[i+1]=='a'&&s[i+2]=='l'&&s[i+3]==')')
            {
                answer+="al";
                i+=4;continue;
            }
        }
        
        return answer;
    }
};