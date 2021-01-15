/*
link-https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
Runtime: 4 ms, faster than 57.17% of C++ online submissions for Binary Search Tree to Greater Sum Tree.
Memory Usage: 8.1 MB, less than 98.60% of C++ online submissions for Binary Search Tree to Greater Sum Tree.

Happy Coding
-------- :)
Akshay Pawar.
*/
// took help :P


class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        trav(root, 0);
        return root;
    }
    int trav(TreeNode* curr, int existingSum){
        if(!curr)   return existingSum;
        int current_sum=trav(curr->right, existingSum);
        curr->val=current_sum+curr->val;
        return trav(curr->left,curr->val);
    }
    
};
