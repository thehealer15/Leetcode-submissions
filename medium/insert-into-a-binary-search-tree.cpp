/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


// https://leetcode.com/problems/insert-into-a-binary-search-tree/
/*
    Runtime: 80 ms, faster than 100.00% of C++ online submissions for Insert into a Binary Search Tree.
    Memory Usage: 56.9 MB, less than 99.95% of C++ online submissions for Insert into a Binary Search Tree.
*/


class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        
        TreeNode* nn= new TreeNode(val);
        if(!root) return nn;
        TreeNode* backup=root;
        TreeNode* tail=NULL;
        while(root){
            tail=root;
            if(root->val>val){
                root=root->left;
            }
            else
                root=root->right;
        }
        
        if(tail->val>val )
            tail->left=nn;
        else
            tail->right=nn;
        return backup;
    }
};