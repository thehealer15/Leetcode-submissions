/*
https://leetcode.com/problems/balanced-binary-tree-solution
Runtime: 12 ms, faster than 92.73% of C++ online submissions for Balanced Binary Tree.
Memory Usage: 21.3 MB, less than 95.58% of C++ online submissions for Balanced Binary Tree.

 */
class Solution {
public:
    int get_height(TreeNode* root){
        if(!root)   return 0;
        return (1+max(get_height(root->left),get_height(root->right)));
    }  
    bool isBalanced(TreeNode* root) {
       if(!root)    return true;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* tmp= q.front();
            if( abs(  get_height(tmp->left)-get_height(tmp->right)  ) >1   )
                return false;
            else{
                if(tmp->left)
                q.push(tmp->left);
                if(tmp->right)
                q.push(tmp->right);
            }
            q.pop();
        }
        return true;
    }
};
