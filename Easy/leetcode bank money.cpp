
class Solution{
public:
  int calculate_money(int n){
int fullWeeks = n / 7;
        int daysAfterWeekStart =  n % 7;
        
        return (2 * 28 + 7 * (fullWeeks - 1)) * fullWeeks / 2 +
            (2 * (fullWeeks + 1) + daysAfterWeekStart - 1) * daysAfterWeekStart / 2;
       }
};
