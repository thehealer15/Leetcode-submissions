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
/*
Verdict:
Runtime: 20 ms, faster than 81.85% of C++ online submissions for Delete Leaves With a Given Value.
Memory Usage: 21.7 MB, less than 100.00% of C++ online submissions for Delete Leaves With a Given Value.

Link:
https://leetcode.com/problems/delete-leaves-with-a-given-value/
*/



class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root==NULL){
            return NULL;
        }
        if(root->left==NULL&&root->right==NULL){
            if(root->val==target)
                return NULL;
        }
        root->left=removeLeafNodes(root->left,target);
        root->right=removeLeafNodes(root->right,target);
        
        if(root->left==NULL&&root->right==NULL){
            if(root->val==target)
                return NULL;
        }
        
        return root;
    }
};