/*
::Link:: 
========https://leetcode.com/problems/hamming-distance========
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Hamming Distance.
Memory Usage: 6 MB, less than 73.43% of C++ online submissions for Hamming Distance.
*/
class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> a(x),b(y);
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])  cnt++;
        }
        return cnt;
        
    }
};
