// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Student Attendance Record I.
// Memory Usage: 6.1 MB, less than 94.10% of C++ online submissions for Student Attendance Record I.
// https://leetcode.com/problems/student-attendance-record-i
class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A')
            {
                a++;
                if(a==2)return false; 
            }   
            else if(s[i]=='L'&&i>=2){
                if(s[i-1]=='L' && s[i-2]=='L'  )
                    return false;
            }
        }
        return true;
    }
};
