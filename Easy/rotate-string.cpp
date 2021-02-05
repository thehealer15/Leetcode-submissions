// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Rotate String.
// Memory Usage: 6.1 MB, less than 78.28% of C++ online submissions for Rotate String.
//     https://leetcode.com/problems/rotate-string
class Solution{
    public:
       bool rotateString(string A, string B) {
       if(A.empty()&&B.empty()  )return true;
          for(int i=0;i<A.length();i++){
              if(A==B) return true;
              char tmp=A.front();
              A.erase(A.begin());
              A.push_back(tmp);
          }
           return false;
       }
};
