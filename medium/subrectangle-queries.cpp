// Runtime: 44 ms, faster than 77.36% of C++ online submissions for Subrectangle Queries.
// Memory Usage: 18.6 MB, less than 60.12% of C++ online submissions for Subrectangle Queries.
// https://leetcode.com/problems/subrectangle-queries
class SubrectangleQueries {
    vector<vector<int>> a;
public:
    SubrectangleQueries(vector<vector<int>>& r) {
        a=r;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for(int i=row1;i<=row2;i++){
            for(int j=col1;j<=col2;j++){
                    a[i][j]=newValue;
                if(i==row2&&j==col2)
                        break;
                
            }
        }
    }
    
    int getValue(int row, int col) {
        return a[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
