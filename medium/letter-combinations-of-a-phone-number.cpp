/*
https://leetcode.com/problems/letter-combinations-of-a-phone-number
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Combinations of a Phone Number.

Memory Usage: 6.7 MB, less than 90.88% of C++ online submissions for Letter Combinations of a Phone Number
*/
string a[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
    vector<string>v;
    
public:
    
void gen(string inp,string op){
    if(inp.length()==0){
        if(op==""){
            ;
        }
        else
            v.push_back(op);
        return ;
    }
    int index= inp[0]-'1';//+1;
    
    string o1,o2,o3;
    o1=o2=o3=op;
    o1.push_back(a[index][0]);
    o2.push_back(a[index][1]);
    o3.push_back(a[index][2]);
    inp.erase(inp.begin()+0);
    gen(inp,o1);
    gen(inp,o2);
    gen(inp,o3);
    if(index+1==7||index+1==9){
        string o4=op;
        o4.push_back(a[index][3]);
        gen(inp,o4);
    }
    return;
}

    vector<string> letterCombinations(string digits) {
        
        gen(digits,"");
        return v;
    }
};
