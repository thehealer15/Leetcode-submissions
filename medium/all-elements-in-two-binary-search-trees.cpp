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
link-https://leetcode.com/problems/all-elements-in-two-binary-search-trees
verdict:
Runtime: 140 ms, faster than 100.00% of C++ online submissions for All Elements in Two Binary Search Trees.
Memory Usage: 85.3 MB, less than 99.14% of C++ online submissions for All Elements in Two Binary Search Trees.


*/


class Solution {
public:
    vector<int> v;
    
    void getSum(TreeNode * rt){
        if(rt){
            getSum(rt->left);
            v.push_back(rt->val);
            getSum(rt->right);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        getSum(root1);
        getSum(root2);
        sort(v.begin(),v.end());
        return v;
    }
};
