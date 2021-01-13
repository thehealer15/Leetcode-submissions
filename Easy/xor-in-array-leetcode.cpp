
/*
    Akshay Pawar
    LeetCode Array Problems
    verdict faster than 100% solutions 
    link-->https://leetcode.com/problems/xor-operation-in-an-array/
*/


class Solution {
public:
    int xorOperation(int n, int start) {
        int xx=0;
        for(int i=0;i<n;i++){
            xx= xx^(start+2*i);     
        } 
        return xx;
    }
};

/*
Note: short hand ^ reduces optimization
same code 95%slow
int xorOperation(int n, int start) {
        int xx=0;
        for(int i=0;i<n;i++){
            xx^= (start+2*i);     
        } 
        return xx;
    }

*/

