// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Average Salary Excluding the Minimum and Maximum Salary.
// Memory Usage: 7 MB, less than 98.69% of C++ online submissions for Average Salary Excluding the Minimum and Maximum Salary
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int k=salary.size()-1;
        double avg;
        for(int i=1;i<k;i++){
            avg+=(salary[i]);
        }
        avg/=(salary.size()-2);
        return avg;
    }
};
