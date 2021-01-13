class Solution {
public:
    int numberOfSteps (int n) {
        /*
        if n is even->
            
        */
        int c=0;
        while(n>0){
            c++;
            if(n&1){
                n--;
            }
            else{
                n/=2;
            }
        }
        return c;
    }
};