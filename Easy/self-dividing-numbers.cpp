// https://leetcode.com/problems/self-dividing-numbers/
// 100% in time 
// 89 in space

class Solution {
public:
    bool isValid(int n){
        int temp=n;
        while(temp>=0){
            int digit=temp%10;
            temp/=10;
            if(digit==0||n%digit!=0)
                return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        
        for(int i=left;i<=right;i++){
            if(isValid(i))
                v.push_back(i);
        }
        return v;
    }
};
