/*
link => https://leetcode.com/problems/k-th-symbol-in-grammar
Runtime: 0 ms, faster than 100.00% of C++ online submissions for K-th Symbol in Grammar.

Memory Usage: 5.9 MB, less than 97.13% of C++ online submissions for K-th Symbol in Grammar.
*/
class Solution {
public:
    int kthGrammar(int N, int K) {
        
        if(N==1 && K==1)   {
            return 0;
        }
        int mid=pow(2,N-2);
        if(K<=mid){
        return    kthGrammar(N-1,K);
        }
        else{
            return !kthGrammar(N-1,K-mid);
        }
        
    }
};
