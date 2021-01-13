
// https://leetcode.com/problems/count-number-of-teams/

// j fix kela 
//per j i hudkla for each case
//like min max
per j left ch min and right ch max ,
right ch min or left ch max both chi sum ans+= keli 
as it's for each j;
return ans;


class Solution {
public:
    
    int numTeams(vector<int>& r) { 
        // int numTeams(vector<int>& rating) { 
        //   fix middle `j` chq chek how many number of rating[i] are less than rating[j]
/*   similarly for rating[k] , chq number of value greater than rating[j]
as answer will be
    
    it will be all about mapping 
    1. grater case:
       (minimum) number_of_rating[i]*number_of_rating[k](maximum)
    2. lesser case:
        
*/
        if(r.size()<3)    return 0;
        int ans=0;
        for(int j=1;j<r.size();j++){
            int i_smaller=0,i_larger=0,k_smaller=0,k_larger=0;
            
            for(int i=0;i<j;i++){
                if(r[j]<r[i])
                    i_larger++;
                if(r[j]>r[i])
                    i_smaller++;
            }
            
            for(int k=j+1;k<r.size();k++){
                if(r[j]<r[k])
                    k_larger++;
                if(r[j]>r[k])
                    k_smaller++;
            }
            ans+=(i_smaller*k_larger)+(i_larger*k_smaller);
        }
        return ans;
        
    }
};