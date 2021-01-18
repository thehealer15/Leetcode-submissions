/*
https://leetcode.com/problems/minimum-distance-between-bst-nodes
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Distance Between BST Nodes.
Memory Usage: 9.7 MB, less than 95.74% of C++ online submissions for Minimum Distance Between BST Nodes

 */
class Solution {
    // int min;
    vector <int> v;
public:
    Solution(){
        
     v.reserve(100);
     }
    void fill_vect(TreeNode* root){
        if(root){
            fill_vect(root->left);
            v.push_back(root->val);
            fill_vect(root->right);
        }
    }
    int minDiffInBST(TreeNode* root) {
           fill_vect(root);
        int min=INT_MAX;
        
        for(int i=1;i<v.size();i++){
            if((v[i]-v[i-1])<min){
                min=v[i]-v[i-1];
            }
        }
        return min;
    }
};
