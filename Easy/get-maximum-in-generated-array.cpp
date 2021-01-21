/*
https://leetcode.com/problems/get-maximum-in-generated-array
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Get Maximum in Generated Array.

Memory Usage: 5.9 MB, less than 89.79% of C++ online submissions for Get Maximum in Generated Array.

*/
class Solution {
    vector<int> v;
    public:
    Solution(){
        v.reserve(102);
        v[0]=0;
        v[1]=1;
    }
    
    int getMaximumGenerated(int n) {
        int max=0;
        if(n==1 || n==0)    return n;
        // if(n<=0)    return 0;
        for(int i=2;i<=n;i++){
            if(i&1){
                v[i]=v[i/2]+v[i/2+1];
            }
            else{
                v[i]=v[i/2];
            }
            if(v[i]>max)
                        max=v[i];
        }
        return max;
    }
};
