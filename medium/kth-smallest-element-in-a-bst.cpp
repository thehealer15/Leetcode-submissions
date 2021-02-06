/*
Runtime: 20 ms, faster than 76.51% of C++ online submissions for Kth Smallest Element in a BST.
Memory Usage: 24.5 MB, less than 59.07% of C++ online submissions for Kth Smallest Element in a BST.
https://leetcode.com/problems/kth-smallest-element-in-a-bst
*/
class Solution {
    vector<int> v;
public:
    void filll(TreeNode* rt){
        if(rt){
            filll(rt->left);
            v.push_back(rt->val);
            filll(rt->right);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
    k--;
        filll(root);
        return v[k];
    }
};
