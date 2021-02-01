/*
Runtime: 12 ms, faster than 75.00% of C++ online submissions for Maximum Number of Balls in a Box.
Memory Usage: 6 MB, less than 87.50% of C++ online submissions for Maximum Number of Balls in a Box.
https://leetcode.com/problems/maximum-number-of-balls-in-a-box
*/
class Solution {
    public:
    
    int digSum(int n){
        int sm=0;
        while(n>0){
            sm+=(n%10);
            n/=10;
        }
        return sm;
    }
    int countBalls(int l, int h) {
        vector<int> vect(46,0);
        for(int i=l;i<=h;i++){
            ++vect[digSum(i)];
        }
        int max=1;
        for(int i=0;i<vect.size();i++)
            if(vect[i]>max)
                    max=vect[i];
            ;;
        return max;
    }
};
