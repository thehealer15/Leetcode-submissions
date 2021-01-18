/*
https://leetcode.com/problems/increasing-order-search-tree/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Increasing Order Search Tree.
Memory Usage: 8.1 MB, less than 72.43% of C++ online submissions for Increasing Order Search Tree.
 */
class Solution {
    vector<int> v;
    
    public:
    Solution(){
        v.reserve(100);
    }
    void fill_stack(TreeNode* root)
    {
        if(root){
            fill_stack(root->left);
            v.push_back(root->val);
            fill_stack(root->right);
        }
    }
    TreeNode* increasingBST(TreeNode* rt) {
        fill_stack(rt);
        TreeNode* root= new TreeNode(v[0]);
        TreeNode* prev= root;
        for(int i=1;i<v.size();i++){
            prev->right=new TreeNode(v[i]);
            prev=prev->right;      
        }
    return root;
    }
};
