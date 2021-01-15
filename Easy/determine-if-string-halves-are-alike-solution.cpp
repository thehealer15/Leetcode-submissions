/*
link-https://leetcode.com/problems/determine-if-string-halves-are-alike

Runtime: 4 ms, faster than 77.52% of C++ online submissions for Determine if String Halves Are Alike.

Memory Usage: 6.8 MB, less than 79.29% of C++ online submissions for Determine if String Halves Are Alike.

Happy Coding  :)

*/
class Solution {
public:
    int cnt_vovels(string s){
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                cnt++;
            else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cnt++;
            
        }
        return cnt;
    }
    bool halvesAreAlike(string s) {
        string s1(s.begin(),s.begin()+(s.length()/2));
        string s2(s.begin()+(s.length()/2),s.end());
        
        return (cnt_vovels(s1)==cnt_vovels(s2));
            
    }
};
