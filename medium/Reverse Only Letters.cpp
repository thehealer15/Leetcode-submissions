// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Only Letters.
// Memory Usage: 6.1 MB, less than 59.57% of C++ online submissions for Reverse Only Letters.
// https://leetcode.com/problems/reverse-only-letters
class Solution {
public:
    string reverseOnlyLetters(string S) {

        if(S.length()==0)return S;
        string b;
        for(char c:S){
            if(c>='a'&&c<='z'||c>='A'&&c<='Z' )
                b.push_back(c);
        }
        reverse(b.begin(),b.end());
        int j=0; // pointer at revered string
        for(int i=0;i<S.length();i++){
            if(isalpha(S[i]))
                S[i]=b[j++];
            
        }
        return S;
    }
};
