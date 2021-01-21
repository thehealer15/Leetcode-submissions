/*
https://leetcode.com/problems/binary-tree-inorder-traversal
Runtime: 4 ms, faster than 48.17% of C++ online submissions for Binary Tree Inorder Traversal.
Memory Usage: 8.2 MB, less than 96.53% of C++ online submissions for Binary Tree Inorder Traversal
 */
class Solution {
    vector<int> v;
    public:
    void fill(TreeNode* root){
        if(root){
            fill(root->left);
            v.push_back(root->val);
            fill(root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        fill(root);return v;
    }
};
