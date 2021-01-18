/**

https://leetcode.com/problems/maximum-depth-of-binary-tree

Runtime: 8 ms, faster than 88.68% of C++ online submissions for Maximum Depth of Binary Tree.

Memory Usage: 18.9 MB, less than 97.68% of C++ online submissions for Maximum Depth of Binary Tree.
 */
class Solution {
int ans;
    public:
    Solution(){ ans=0;}
    int maxDepth(TreeNode* root) {
        // int ans=0;
        if(root==NULL)  return 0;
        
        if(root){
            int le= maxDepth(root->left);
            int rg= maxDepth(root->right);
            ans=1+max(le,rg);
        }
        
        return ans;
    }
};
