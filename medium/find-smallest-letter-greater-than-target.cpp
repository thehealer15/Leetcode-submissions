/* Runtime: 16 ms, faster than 85.78% of C++ online submissions for Find Smallest Letter Greater Than Target.
Memory Usage: 15.9 MB, less than 85.48% of C++ online submissions for Find Smallest Letter Greater Than Target.
Linear search :
 ___________ 
https://leetcode.com/problems/find-smallest-letter-greater-than-target
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target)
                return letters[i];
        }
        return letters[0];
    }
};
________________________________________________________________________________________
    binary search
Runtime: 28 ms, faster than 28.29% of C++ online submissions for Find Smallest Letter Greater Than Target.
Memory Usage: 16 MB, less than 64.56% of C++ online submissions for Find Smallest Letter Greater Than Target
*/
 class Solution{
    public:
     char nextGreatestLetter (vector<char>& l,char tar){
           if(tar>l[l.size()-1] && tar<l[0])
               return l[0];
         int low=0,high=l.size()-1;
         while(low<=high){
             int mid=low+(high-low)/2;
             if(l[mid]>tar)
                 high=mid-1;
             else
                 low=mid+1;
             
         }
         return l[low%l.size()];
     }
 };   
