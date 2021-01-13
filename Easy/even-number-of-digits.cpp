// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int dig(int n){
        int c=0;
        while(n>0){
            c++;
            n/=10;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(dig(nums[i])&1);
            else cnt++;
            
        }
        return cnt;
    }
};