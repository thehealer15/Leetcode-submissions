/*
https://leetcode.com/problems/sum-of-left-leaves
Runtime: 8 ms, faster than 34.45% of C++ online submissions for Sum of Left Leaves.
Memory Usage: 13.3 MB, less than 98.44% of C++ online submissions for Sum of Left Leaves.
 */
class Solution {
public:
    int Sum(TreeNode* root,int x){
        if(!root)return 0;
        if(!root->left&&!root->right&&x==-1) return root->val;
        return Sum(root->left,-1)+Sum(root->right,1);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
       return   Sum(root,0);
    }
};
