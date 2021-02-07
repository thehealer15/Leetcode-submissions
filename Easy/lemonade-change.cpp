
// Runtime: 8 ms, faster than 98.75% of C++ online submissions for Lemonade Change.
// Memory Usage: 17 MB, less than 90.84% of C++ online submissions for Lemonade Change
// https://leetcode.com/problems/lemonade-change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       
        int five=0,ten=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
            }
            else{
                if(bills[i]==10){
                   if(five==0)
                        return false;
                    else if(five>=1)
                    {
                        ten++;five--;
                    }
                    
                }
                else {
                     if(ten>0&&five>0){
                        ten--;five--;
                    }
                    else if(five>=3)
                        five-=3;
                    else return false;
                    
                }
            }
        
        }
        return true;
    }
};
