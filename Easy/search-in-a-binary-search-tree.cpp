/*
https://leetcode.com/problems/search-in-a-binary-search-tree
Runtime: 52 ms, faster than 60.60% of C++ online submissions for Search in a Binary Search Tree.
Memory Usage: 34.8 MB, less than 87.33% of C++ online submissions for Search in a Binary Search Tree
 */
class Solution {

public:
    
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* a=NULL,* b=NULL;
        if(root){
            a=searchBST(root->left,val);
            if(root->val==val)
                    return root;
            b=searchBST(root->right,val);
        };;
        if(a)return a;
        if(b)return b;
        return NULL;
    }
};
