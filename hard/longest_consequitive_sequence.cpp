/* 
Runtime: 12 ms, faster than 71.88% of C++ online submissions for Longest Consecutive Sequence.
Memory Usage: 10.9 MB, less than 50.53% of C++ online submissions for Longest Consecutive Sequence.
https://leetcode.com/problems/longest-consecutive-sequence
Logic :
insert in set so they will be sorted as well as be unique;
now iterate though given vector
if previous number of current nums[i] (nums[i]-1) exists in set, leave it 
else keep current num = num 
while current num +1 is in set, increase current num by 1 and out strak length too 

*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s; // set of interger's
        
        for(int x:nums)
            s.insert(x);
        
        int longestStreak=0;
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i]-1)){
                
                int current_Streak=1;
                int number= nums[i];
                while(s.count(number+1)){
                    number++;
                    current_Streak++;
                }
                longestStreak=max(current_Streak,longestStreak);
            }
        }
        return longestStreak;
    }
};