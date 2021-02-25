// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Strings Alternately.
// Memory Usage: 6.2 MB, less than 100.00% of C++ online submissions for Merge Strings Alternately
// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
           string merge = "";
           
           int i,j,n1 = word1.size(),n2 = word2.size();
           i = j = 0;
            
           while(i < n1 && j < n2){
                 merge.push_back(word1[i++]);
                 merge.push_back(word2[j++]);  
           } 
            
           while(i < n1) merge.push_back(word1[i++]);
           while(j < n2) merge.push_back(word2[j++]);     
            
          return merge;  
    }
};
