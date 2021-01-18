/*
https://leetcode.com/problems/validate-binary-search-tree/

Runtime: 20 ms, faster than 35.35% of C++ online submissions for Validate Binary Search Tree.

Memory Usage: 21.6 MB, less than 98.34% of C++ online submissions for Validate Binary Search Tree.

 */
class Solution {
public:
    bool isValidBST(TreeNode* root,TreeNode* minNode=NULL,TreeNode* maxNode=NULL) {
        
        if(!root)   return true;
        
        if( minNode && minNode->val >=root->val || maxNode &&maxNode->val<=root->val  )
            return false;
        
        bool left_valid=isValidBST(root->left,minNode,root);
        bool right_valud=isValidBST(root->right,root,maxNode);
        
        return left_valid&&right_valud;
        
        
    }
};
