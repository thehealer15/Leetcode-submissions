/*
link=>https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/

Runtime: 624 ms, faster than 96.98% of C++ online submissions for Find a Corresponding Node of a Binary Tree in a Clone of That Tree.

Memory Usage: 163.8 MB, less than 99.15% of C++ online submissions for Find a Corresponding Node of a Binary Tree in a Clone of That Tree.
*/

class Solution {
    int value_of_cloned;
    TreeNode* ans;
    public:
    
    void get_node(TreeNode* root){
        if(root){
        get_node(root->left);
        if(root->val==value_of_cloned){
            ans=root;
            return; //root;
        }
        get_node(root->right);
        }
            
        }
    // original madhun target value retrive krt ahe
    void get_value(TreeNode* root,TreeNode* target){
        if(root){
        get_value(root->left,target);
        if(root==target){
            value_of_cloned=root->val;
            return ;
        }
        get_value(root->right,target);
        }
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            
        get_value(original,target);
        get_node(cloned);
        return ans;
        
    }
};
