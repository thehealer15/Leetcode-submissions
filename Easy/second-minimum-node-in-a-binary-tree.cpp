/*
https://leetcode.com/problems/second-minimum-node-in-a-binary-tree
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Second Minimum Node In a Binary Tree.
Memory Usage: 7 MB, less than 77.40% of C++ online submissions for Second Minimum Node In a Binary Tree.
*/
class Solution {
    set<int> s;
public:
    void f(TreeNode* root){
        if(root){
            f(root->left);
            s.insert(root->val);
            f(root->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
            f(root);
            if(s.size()==1) return -1;
        auto it=s.begin();
        
        return *(++it);
        
    }
};
